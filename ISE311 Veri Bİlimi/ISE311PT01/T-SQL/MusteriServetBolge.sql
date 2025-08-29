SELECT * 
FROM

(SELECT MusteriBilgi.MusteriID, MusteriBilgi.TamAd, MusteriBilgi.SehirAd, MusteriBilgi.BolgeAd,
       MusteriBilgi.KategoriID, MusteriBilgi.Yas, 
	   MusteriServet.ServetTRY, DENSE_RANK() OVER (PARTITION BY MusteriBilgi.BolgeAd, MusteriBilgi.KategoriID ORDER BY MusteriBilgi.Yas ASC, MusteriServet.ServetTRY DESC) AS MRank  
	   
FROM
(SELECT M.MusteriID, 
CASE WHEN M.IkinciAd IS NOT NULL THEN 
CONCAT(CONCAT(M.IlkAd,' '),CONCAT(M.IkinciAd, ' '),M.Soyad) ELSE 
CONCAT(CONCAT(M.IlkAd,' '),M.Soyad)
END AS TamAd, MSX.SehirAd, MSX.BolgeAd,
M.KategoriID,
DATEDIFF(YEAR, M.DTarihi, GETDATE()) AS Yas
FROM MUSTERI M
INNER JOIN
(SELECT MSB.MusteriID, MSB.SehirAd, MSB.BolgeAd
FROM
(SELECT MS.MusteriID, MS.AcilmaTarihi, MS.SiraNo, MS.SehirAd, B.BolgeAd FROM BOLGE B
LEFT JOIN 
(SELECT H.MusteriID, H.AcilmaTarihi, S.BolgeID, S.SehirAd,
ROW_NUMBER() OVER (PARTITION BY MusteriID ORDER BY AcilmaTarihi) AS SiraNo
FROM HESAP H
LEFT JOIN BANKA_SUBE BS
ON H.SubeID = BS.SubeID
LEFT JOIN ILCE I
ON BS.IlceID = I.IlceID
LEFT JOIN SEHIR S
ON I.SehirID = S.SehirID) MS
ON MS.BolgeID = B.BolgeID) MSB
WHERE SiraNo=1) MSX
ON M.MusteriID = MSX.MusteriID) MusteriBilgi

LEFT JOIN 

(SELECT MTV.MusteriID, (MTV.NakitTRY + MTN.VarlikTRY) AS ServetTRY
FROM
(SELECT M.MusteriID, ISNULL(SUM(H.Meblag*DT.Kur),0) AS NakitTRY
FROM MUSTERI M
LEFT JOIN HESAP H
ON M.MusteriID = H.MusteriID
LEFT JOIN DOVIZ_TUR DT
ON H.DovizID = DT.DovizID
GROUP BY M.MusteriID) MTV
INNER JOIN
(SELECT M.MusteriID, ISNULL(SUM(MV.Deger*DT.Kur),0) AS VarlikTRY
FROM MUSTERI M
LEFT JOIN MUSTERI_VARLIK MV
ON M.MusteriID = MV.MusteriID
LEFT JOIN DOVIZ_TUR DT
ON MV.DovizID = DT.DovizID
GROUP BY M.MusteriID) MTN
ON MTV.MusteriID = MTN.MusteriID) MusteriServet

ON MusteriBilgi.MusteriID = MusteriServet.MusteriID) MDATA
WHERE MRank <= 3