#include <iostream>
#include <iomanip>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <ctime> 
#include <cmath>
#include <string>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <cstring>

using namespace std;

/* // Hello World
//Nesne ya da fonksiyon arşivlerinin kullanımında, arşivlerdeki
//değişkenler ile kendi yazdığınız programınız içerisindeki
//değişkenlerin isimleri çakışabilir. Bu durumda derleme hatası ile
//karşılaşabilirsiniz. C++ bu problemi namespace ile çözmüştür
int main ()
{
  cout<<"Hello World"<<endl;
  system("pause");
  return 0;
}
*/

/* // sayı sapma  ve tahmini değer
int main() {
    
    float sayi,sapma,tahmin;
    cout <<"Sayiyi giriniz : ";
    cin>>sayi;
    cout<<"Sapma degerini giriniz : ";
    cin>>sapma;
    cout<<"Tahmin degerini giriniz : ";
    cin>>tahmin;
    while (abs(sayi - tahmin * tahmin) > sapma) {
        tahmin = (tahmin + sayi / tahmin) / 2;
    }
    cout<<tahmin;
    system("pause");
    return 0;
}
*/

/* // fahrenheit derece dönüşümü
int main()
{
    char ch, secenek;
    float fSicaklik, cSicaklik, sicaklik;
do
    {
    cout << "Fahrenheit'dan Celsius'a cevirmek icin : f" << endl;
    cout << "Celsius'dan Fahrenheit'e cevirmek icin : c" << endl;
    cout << "seciminiz : ";
    cin >> secenek;
    if (secenek == 'f')
    {
      cout << "F sicaklik degerini giriniz : " << endl;
      cin >> sicaklik;
        cSicaklik = (sicaklik - 32) * 5 / 9;
    cout << "Celsius olarak : " << cSicaklik << "\370" << 'C' << endl;
    }
    
    else if (secenek == 'c')
    {
      cout << "C sicaklik degerini giriniz : " << endl;
      cin >> sicaklik;
        fSicaklik = (sicaklik * 9/5) + 32;
    cout << "Fahrenheit olarak : " << fSicaklik << "\370" << 'F' << endl;
    }
    
    else
    {
        cout << "Lutfen Yukarida Verilen Karakterlerden Birini Giriniz!" << endl;
    }
      do
        {
            cout << "\nbaska islem (e/h) : " << endl;
            cin >> ch;
        }while (!(ch == 'e' || ch == 'h'));
        
        
    } while (ch != 'h');
    system("pause");
    return 0;
}
*/

/* // dairenin yarıcapını hesaplama
int main()
{
    float yaricap;
    const float PI = 3.14F; //const pi, e gibi özel ifadeler için
    float alan;
    cout << "Dairenin yari capi";
    cin >>  yaricap;
    alan = PI * yaricap * yaricap;
    //float alan = PI * yaricap * yaricap
    cout << "Alan degeri: " << alan << endl;
    system("pause");
    return 0;
}
*/

/* // numaralandıma(enum)
enum haftanin_gunleri { Pzt=20, Sa, Car=30, Pers, Cu, Cts, Pz };
int main()
{
    haftanin_gunleri gun1, gun2;
    gun1 = Pzt;
    gun2 = Car;
    int fark = gun2 - gun1;
    cout << "Gunler arasindaki fark =" << fark << endl;
    system("pause");
    return 0;
}
*/

/* // setfill kullanımı
int main () 
{
    long A = 1234567, B = 123, C = 2345;
    cout << setfill('-') << setw(10) << 11 << endl;
    cout << setfill('-') << setw(10) << 2222 << endl;
    cout << setfill('-') << setw(10) << 33333 << endl;
    cout << setfill('-') << setw(10) << 4 << endl;
    system("pause");
return 0;
}
*/

/* // isim bölüm ve numara yazdırma
int main()
{
setlocale(LC_ALL, "Turkish");
cout << "Yusuf Gulmez" <<endl;
cout << "Bilisim Muhendisligi" <<endl;
cout << "B20*******" <<endl;
system("PAUSE");
return 0;
}
*/

/* // ++sayi, sayi++, gibi ifadelerle (k,l,m,..) bilinmeyenleri bulma
int main ()
{
    int sayi;
    sayi = 10;
    int k = ++sayi;
    int l = sayi++;
    int m = l--;
    cout << "k = " << k << endl << "l = " << l << endl << "m = " << m << endl << "sayi = " << sayi << endl;
    system("pause");
    return 0;
}
*/

/* // karakter yazdırma
int main()
{
char ch1 = 'Y';
char ch2 = 'G';
char ch3 = '\t';
cout << ch1 << ch3 << ch2 << endl;
system("pause");
return 0;
}
*/

/* // tablo oluşturma (sola ve sağa yatık yazma) (<< left <<)
int main ()
{
    long A = 1234567, B = 123, C = 2345, D = 47821, E = 9350, F = 349;
    
   // cout << setw(4) << "A" << setw(14) << A << endl;  x+4=14   2. Çözüm
   // cout << setw(4) << "B" << setw(10) << B << endl;  x=10 
   // cout << setw(4) << "C" << setw(11) << C << endl;  x+1=11
    
    cout  << setw(10) << "E" << setw(20) << E << endl;
    cout  << setw(10) << "D" << setw(20) << D << endl; // 1. çözüm
    cout  << setw(10) << "F" << setw(20) << F << endl;
    system("pause");
    return 0;    
}
*/

/* // iki sayıyı çarpma (int*float)
int main()
{
int tamsayi = 7;
float kayannokta = 155.5F;
double sonuc = tamsayi * kayannokta;
cout << "SONUC....:" << sonuc << endl;
system("pause");
return 0;
}
*/

/* // ASCI karşılığı bulma
int main()
{
    char ch1 = _getch();
    cout << ch1 << " karakterin ASCI karsiligi : " << static_cast<int>(ch1) << endl;
    system("pause");
    return 0;
}
*/

/* // Karekök Hesaplama
int main()
{
setlocale(LC_ALL, "Turkish");
double sayi, sonuc;
cout << "bir sayi giriniz:" ;
cin >> sayi;
sonuc = sqrt(sayi); //sqrt() fonk double veri tipi alır
cout << sayi << "sayının karekoku:" << sonuc << endl;
system("pause");
return 0;
}
*/

/* // girilen sayının, tahmini karekökünü ve hata değerini girip karekökünü hesaplama
int main ()
{
    float a, x, e, b, y;
    cout << "karekökü bulunacacak olan sayı : ";
    cin >> a;
    cout << "tahmini karekök değerini giriniz : ";
    cin >> x;
    cout << "kabul edilebilir hata değerini giriniz : ";
    cin >> e;
 do
 {
    b = (a - x * x) / (2 * x);
    y = x + b; //yeni karekök değeri
    cout << x << endl;
    x = y;
 }while (fabs(b) > e);
    
    cout << "karekök : " << y << endl;
    
    system("PAUSE");
    return 0;   
}
*/

/* // Hesap Makinesi (if-else if- else)
int main() {
    int a,b;
    string islem;
    cout << "hesap makinesine hos geldiniz.." << endl;
    cout << "+" << endl;
    cout << "-" << endl;
    cout << "*" << endl;
    cout << "/" << endl;
    cout << "islem giriniz" << endl;
    cin >> islem;
    if (islem == "+") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        cout << "toplam : " << a + b << endl;
    }
    else if (islem == "-") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        cout << "fark : " << a - b << endl;
    }
    else if (islem == "*") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        cout << "çarpım : " << a * b << endl;
    }
 
    else if (islem == "/") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        cout << "bölüm : " << a / b << endl;
    }
    else  {
        cout <<  "error" << endl;
    }
    system("pause");
    
    return 0;
}
*/

/* // iki sayının ortalamsını hesaplama
int main () {
float x, y;
cout << "iki sayı giriniz" << endl;
cin >> x >> y;
cout << "" << endl;
cout << "ortalama : " << (x + y)/2 << endl;
system ("pause");
return 0;
}
*/

/* // iki sayıyı karşılaştırma
int main () {
int sayi1, sayi2;
cout << "iki sayi giriniz : \n" ;
cin >> sayi1 >> sayi2;  
if ( sayi1 < sayi2 ) {
    cout << sayi1 << " " << sayi2 << "'den kucuk...\n";
}
else if ( sayi1 > sayi2) {
    cout << sayi2 << " " << sayi1 << "'den kucuk...\n";
}
else if (sayi1 == sayi2) {
    cout << "sayi1 = sayi2 \n"  ;
}
else  
    cout << "yanlis girdiniz" << endl;
system ("pause");
return 0;
}
*/

/* // Girilen Vize ve Final Notlarından Ortalama Hesaplama ve Geçip-Kalma  
int main () {
setlocale(LC_ALL, "Turkish");
int vize, final;
cout << "vize ve final notunu girin : \n";
cin >> vize >> final ;
float ort = (vize*0.4 + final*0.6);
cout << "ortalamaniz : " << ort << endl;
if (ort < 50 || final < 50) {
       // if(final < 50)
        
    cout << "kaldiniz" << endl;
}
else {
cout << "gectiniz" << endl;
}
system("pause");
return 0;
}
*/

/* // Girilen Ortalamanın Harf Karşılığı
int main () {
    int ort;
    
    cout << "ortalama giriniz : " << endl;
    cin >> ort;
    if ( ort >= 90) {
        cout << "AA\n";
    }
    else if ( ort >= 80) {
        cout << "BB\n";
    }
    else if ( ort >= 70) {
        cout << "CC\n";
    }
    else if ( ort >= 50) {
        cout << "DD\n";
    }
    else 
        cout << "FF\n";
system("pause");
return 0;
}
*/

/* // Üç Basamaklı Rakamları Birbirinden Farklı Kaç Sayı Var
int main() 
{
    int sayac = 0;
    int i;
    int a,b,c;
    for ( i = 100; i <= 999; i++)
    {
        a = i/100;
        b = (i/10)%10;   
        c = i%10;
        if (a!=b && a!=c && b!=c)
        {
            sayac++;
        }
        
    }
    cout << sayac << endl;
    
    system("pause");
    return 0;
}
*/

/* // Hesap Makinesi (switch-case-break)
int main() {
        char islem;
    int sayi1, sayi2;
    cout << "2 sayi girin" << endl;
    cin >> sayi1 >> sayi2;
    cout << "yapmak istediginiz islemi seciniz. ( + , - , * , / ): " << endl;
    cin >> islem;
    switch(islem)
    {
        case '+':
            cout << sayi1 + sayi2 ;
                break;
        case '-':
            cout << sayi1 - sayi2 ;
                break;
        case '*':
            cout << sayi1 * sayi2 ;
                break;
        case '/':
            cout << sayi1 / sayi2 ;
                break;
        default:
            cout << "yanlis islem girdiniz" << endl;
    }        
system("pause") ;
return 0;
}
*/

/* // 1'den 100'e kadar olan sayıların küpleri
int main() {
for (int i =1; i <= 100; i++) 
{
    cout << setw(10) << left << i << setw(15) << pow(i,3) << endl;
}
    system("pause"); 
    
    return 0;
}
*/

/* // 0-1000 arasındaki tek ve çiftlerin sayısı, toplamı ve ortalması
int main () {
int teksayac=0, tektoplam=0, tekort=0, ciftsayac=0, cifttoplam=0, ciftort=0;
for ( int i = 1; i <= 1000 ; i++)
{
    if(i % 2 == 0)
    {
        ciftsayac++;
        cifttoplam +=i;
        
    }
    else 
    {
        teksayac++;
        tektoplam +=i;
    }
}
    ciftort = cifttoplam / ciftsayac;
    tekort = tektoplam / teksayac;
    cout << "Tek Sayıların Sayısı : " << teksayac << endl;
    cout << "Tek Sayıların Toplamı : " << tektoplam << endl;
    cout << "Tek Sayıların Ortalaması : " << tekort << endl;
    cout << "-------------------------------------------"<<endl;
    cout << "Çift Sayıların Sayısı : " << ciftsayac << endl;
    cout << "Çift Sayıların Toplamı : " << cifttoplam << endl;
    cout << "Çift Sayıların Ortalaması : " << ciftort << endl;
    system("pause");
    return 0;
}
*/

/* // 1' den 10'a kadar olan sayıları topla
int main () {
    
    int toplam = 0;
    for (int sayac = 1; sayac <= 10; sayac++)
    {
        toplam += sayac;
        cout << "Toplam = " << toplam << endl;
    }
system("pause") ;
return 0;
}
*/

/* // mükemmel sayisi (Vize Sourusu)
int main() {
	int sayi;
	int toplam = 0;
	cout << "Sayi giriniz:";
	cin >> sayi;
	for (int i = 1 ; i < sayi ; i++) 
	{
		if (sayi % i == 0) {
			 toplam = toplam + i;
		}
	}
	if (toplam == sayi)
		cout << "Sayiniz mukemmel sayisidir." << endl;
	else cout << "Sayiniz mukemmel sayisi degildir." << endl;
	system("PAUSE");
	return 0;
}
*/

/* // Faktöriyel hesaplayan program
int main() {
    unsigned int sayi;   //unsigned işaretsiz demek negatif sayıları da alması için kullan
    unsigned long fakt = 1;
    cout << "Bir sayı girin : ";
    cin >> sayi;
    for (int i = sayi; i > 0; i--)
    {
        fakt *= i; //sayi, sayi-1, ..., 2, 1
    }
    
    cout << sayi << "! = " << fakt << endl;
    
    system("pause");
return 0;
}
*/

/* // fibonacci serisi (if - else if - else - for)
int main()
{
    int n;
    cout << "bir sayi giriniz : ";
    cin >> n;
    int a = 1;
    int b = 1;
    if (n==1)
    {
        cout << 1 << endl;
    }
    else if (n<=0);
    else
    {
        cout << a << endl << b << endl;
        for (int i = 0; i < n; i++)
        {
        int c = a + b;
        a = b;
        b = c;
        cout << c << endl;
        }
    }
    system("pause");
    return 0;
}
*/

/* // While döngüsü ile 1'den 100'e kadar olan sayıların küplerini ekrana yazdırma
int main() {
    int i = 1;
    while (i <= 100)
    {
        cout << setw(10) << left << i << setw(15) << pow(i,3) << endl;
        i++;
    }
    system("pause");
    return 0;
}
*/ 

/* // while döngüsü tek ve çiftlerin sayısı-toplamı
int main() 
{
    int  teksayac = 0, tektoplam = 0, ciftsayac = 0, cifttoplam = 0 ; 
    int sayi;
    cout << "sayı giriniz : " ;
    cin >> sayi;
    while (sayi != 0)
{
    if (sayi % 2 == 0)
    {
        ciftsayac++;
        cifttoplam += sayi;
    }
    else 
    {
        teksayac++;
        tektoplam += sayi;
    }    
    cout << "tek adedi : " << teksayac << endl;
    cout << "tek toplam : " << tektoplam << endl;
    
    cout << "cift adedi : " << ciftsayac << endl;
    cout << "cift toplam : " << cifttoplam << endl;
    cout << "sayı giriniz : ";
    cin >> sayi;
}
system("pause");
return 0;
}
*/

/* // Dördüncü kuvvet değeri 10000'den küçük olan sayıları ve kuvvet
değerlerini ekrana yazdıran program
using namespace std;
int main ()
{
    int sayi=0;
    int kuvvet=0;
    while(kuvvet <= 10000)
{
        cout << left << setw(5) << kuvvet << endl;
        cout << left << setw(2) << sayi;
        ++sayi;
        kuvvet = sayi*sayi*sayi*sayi;
}
 system("pause");
 return 0;
}
*/

/* // do-while ile 1' den 100' e kadar olan sayıların küplerini ekrana yazdıaran program
int main()
{
    int i=1;
    do
    {
        cout << setw(10) << left << i << setw(15) << pow(i,3) << endl;
        i++;
    } while (i <= 100);
    
    system("pause");
    return 0;
}
*/

/* // do-while ile 1' den n'e kadar olan sayıların toplamı
int main () 
{
    int sayac = 0, toplam = 0;
    int n;
    cout << "n'e bir değer veriniz : ";
    cin >> n;
    do
    {
        toplam += sayac;
        sayac++;
     } while (sayac <= n);
    
cout << "toplam = " << toplam << endl;
system("pause");
return 0;
}
*/

/* // do while ile tek ve ciftlerin sayısını bulma
int main ()
{
    int tektoplam = 0, teksayac = 0, ciftoplam = 0, ciftsayac = 0;
    int sayi;
     
     do 
        {
        cout << "bir sayı girin : ";
        cin >> sayi;
            if (sayi > 0)
            {
                if (sayi % 2 == 0)
                {
                    ciftsayac++;
                    ciftoplam += sayi;
                }            
                else
                {
                    teksayac++;
                    tektoplam += sayi;
                }
            }        
        }while(sayi > 0);
                cout << "teklerin sayısı : " << teksayac << endl;
                cout << "teklerin toplamı : " << tektoplam << endl;
                cout << "çiftlerin sayısı : " << ciftsayac << endl;
                cout << "çiftlerin toplamı : " << ciftoplam << endl;    
    system("pause;");
return 0;            
}
*/

/* // Continue = 1'den 10'a kadar olan sayıların küpü ama continue ile bir sayıyı atlama
int i = 0;
int main ()
{
    
    for ( i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;
        cout << setw(10) << left << i << setw(15) << pow(i,3) << endl;            
    }
    cout << "i = " << i << endl;
system("pause");
return 0;
}
*/

/* // do while ile hesap makinesi yapma
int main ()
{
    char islem, ch;
    int sayi1, sayi2;
    do
    {
        cout << "işlem türü seç : (+,-,*,/)" << endl;
        cin >> islem;
        cout << "sayı 1 : ";
        cin >> sayi1;
        cout << "sayı 2 : ";
        cin >> sayi2;
        switch (islem)
        {
        case '+':
            cout << sayi1 << "+" << sayi2 << "=" << sayi1 + sayi2;
            break;
        case '-':
            cout << sayi1 << "-" << sayi2 << "=" << sayi1 - sayi2;
            break;
        case '*':
            cout << sayi1 << "*" << sayi2 << "=" << sayi1 * sayi2;
            break;
        case '/':
            cout << sayi1 << "/" << sayi2 << "=" << sayi1 / sayi2;
            break;
        default:
            cout << "hata..!";
            break;
        }
        do
        {
            cout << "\nbaska islem (e/h) : ";
            cin >> ch;
        } while (!(ch == 'e' || ch == 'h'));
        
        
    } while (ch != 'h');
    
    system("pause");
    return 0;
}
*/

/* // girilen kelimenin kaç harften oluştuğunu bulan program
int main()
{
    int harfsayac=0;
    int kelimesayac=1;
    char ch = 'a'; 
    
    cout << "bir cumle giriniz .: ";
    
    while( ch != '\r' ) 
    {
        ch = getche(); 
        if( ch==' ' ) 
            kelimesayac++; 
        else 
            harfsayac++; 
    }
    cout << "\nkelime sayisi = " << kelimesayac << endl;
    cout << "harf sayisi = " << (harfsayac-1) << endl;
system("pause");
return 0;
}
*/

/* // for-else kullannılarak mod yardımıyla ekrana çıktı alma
int main ()
{
int i, j ;
	for (i = 1 ; i < 5 ; i++)
    for (j = 0; j <= 5; j++)
    {
    if ( (i + j) % 2 == 0 )
	    {
    cout << "X" << endl ;
	    }
    
        else 
        {
    cout << "Y" << endl;
        }
    }
system("pause");
return 0;
}    
*/

/* // girilen sayıdan sonraki 5 asal sayıyı gösteren program
int main()
{
int sayi, asal, i, j, say=0;
cout << "Bir sayi girin: ";
cin >> sayi;
for(i=sayi+1;;i++) 
{
        asal=1;
for(j=2;j<=i/2;j++) 
{
    if(i%j==0) 
    {
        asal=0;
    break;
    }
}
    if(asal==1) 
    {    
        cout << i << endl;
        say++;
    }
    if(say==5) break;
}
system("pause");
return 0;
}
*/

/* // girilen sayının harf karsılıgı
int main ()
{
    int  y;
    cout << "deger gir : "<< endl;
    cin >> y;
    if(y > 20) 
        cout << "A" << endl;
    else if (y > 15)
        cout << "B" << endl;
    else if (y > 10)
        cout << "C" << endl;
    else if (y > 5)
        cout << "D" << endl;
    else 
        cout << "E" << endl; 
 system("pause");
return 0;
}
*/

/* // veri tipi (enum) giris
enum bolumler { yazilim, bilisim, bilgisayar};
int main () {
    bolumler bolum1;
    bolum1 = bilisim;
    bolum1 = static_cast<bolumler>(bolum1 + 1);
    cout << bolum1 << endl;
    system("PAUSE");
    
    return 0;
}
*/

/* // model no, parca no,...
int main ()
{
struct urun
{
    int modelno;
    int parcano;
    float ucret;
};
urun urun1;
urun1 = {5235, 98, 153.15f};
urun1.modelno = 2021;
urun urun2;
urun2 = urun1; // ilk yapı değişkenleri değerleri ikinci değişkene ata
cout << "urun1" << endl;
cout << "modeli : " << urun1.modelno << endl;
cout << "parca no : " << urun1.parcano << endl;
cout << "----------------------" << endl;
cout << "urun2" << endl;
cout << "modeli : " << urun2.modelno << endl;;
cout << "parca no : " << urun2.parcano << endl; 
system("pause");
return 0;
}
*/

/* // karmaşık sayılarda sanal ve gerçel kısmı yazma (fixed-setprecision) (strcut ile)
int main()
{
    (LC_ALL, "Turkish");
    
    struct karmasik
    {
        float gercel;
        float sanal;
    };
    
karmasik ks1;
// kaç basamak gösterileceğini belirtmek için fixed ve setprecision kullanılır!
// fixed kullanlımzsa toplam basamak sayısı, kullanılırsa virgülden sonraki basamak sayısı belirtilir!
// iomanip kütüphanesine gereklidir!
cout << "gerceli : " << endl;
cin >> ks1.gercel ;
cout << "sanali : " << endl;
cin >> ks1.sanal ;
cout << fixed << setprecision(3) << ks1.gercel << " + " << ks1.sanal << "i" << endl; //
system("PAUSE");
return 0;
}
*/

/* // struct veri tipi ile ad soyad vize final yazdırma
struct ogrenci
{
    string ad;
    string numara;
    int vize;
    int final;
};
int main()
{
ogrenci ogrenci1;
    {
        ("Yusuf Gulmez", "B201200025", 35, 85);
    }
cout << ogrenci1.ad << endl;
cout << ogrenci1.numara << endl;
cout << ogrenci1.vize << endl;
cout << ogrenci1.final << endl;
system("pause");
return 0;
}
*/

/* // karmasik sayılarda toplama 
int main()
{
    struct karmasik
    {
        float gercel;
        float sanal;
    };
    
    karmasik ks1, ks2;
    cout << "ilk karmasik sayinin gercel ve sanal kismini sirasiyla giriniz! " << endl;
    cout << "gercel : ";
    cin >> ks1.gercel ;
    cout << "sanal : ";
    cin >> ks1.sanal ;
    cout << ks1.gercel << " + " << ks1.sanal << "i" << endl; //
    cout << "-------------------------------------" << endl;
    cout << " ikinci sayinin gercel ve sanal kisimlarini sirfasiyla giriniz! " << endl;
    cout << "gercel : ";
    cin >> ks2.gercel ;
    cout << "sanal : ";
    cin >> ks2.sanal ;
    cout << ks2.gercel << " + " << ks2.sanal << "i" << endl;
    
    cout << endl;
    cout << "Sonuc : " << (ks1.gercel + ks2.gercel) << " + " << (ks1.sanal + ks2.sanal) << "i" << endl;
    system("PAUSE");
return 0;
}
*/

/* // enum ile yonler
enum yonler { kuzey, guney, dogu, bati };
int main()
{
    enum yonler yon;
    int secim;
    cout << "yon giriniz (kuzey=0, guney=1, dogu=2, bati=3) : ";
    cin >> secim;
    yon = static_cast<yonler>(secim);
    switch (yon)
    {
    case kuzey: cout << "kuzey" << endl;
        break;
    case guney: cout << "guney" << endl;
        break;
    case dogu: cout << "dogu" << endl;
        break;
    case bati: cout << "bati" << endl;
        break;
    default: cout << "hatali secim" << endl;
        break;
    }
    system("PAUSE");
    return 0;
}
*/

/* // anlık tarihi ve zamanı yazdırır
int main() 
{
   // current date and time on the current system
   time_t now = time(0);
   // convert now to string form
   char* date_time = ctime(&now);
   cout << "suanki tarih ve zaman: " << date_time << endl;
    system("pause");
    return 0;
}
*/

/* // calısanın aldıgı maasa gore durumu
enum calisandurumu {dusuk, orta, iyi};
struct calisan
{
    int calisanNo;
    float maas;
    calisandurumu cd;
};
int main()
{
    calisan isci ;
    cout << "--GIRILEN BILGILER--" << endl;
    cout << "1.iscinin numarasini giriniz : " << endl;
    cin >> isci.calisanNo;
    cout << endl;
    cout << "1.iscinin maasini giriniz : " << endl;
    cin >> isci.maas;
    cout << endl;
    cout << "--CIKTI BILGISI--" << endl;
    cout << "1.iscinin numarasi = \t" << isci.calisanNo << endl;
    cout << "1.iscinin maasi = \t" << isci.maas << "TL" << endl;
    
    if(isci.maas < 4000)
        isci.cd = dusuk;
    else if (isci.maas < 7000)
        isci.cd = orta;
    else if (isci.maas >= 7000)
        isci.cd = iyi;
    switch (isci.cd)
    {
    case dusuk: cout << "1. iscinin durumu = \t dusuk gelirli" << endl;
        break;
    case orta: cout << "1. iscinin durumu = \t orta gelirli" << endl;
        break;
    case iyi: cout << "1. iscinin durumu = \t iyi gelirli" << endl;
        break;
    
    default:
        break;
    }
    system("pause");
    return 0;
}
*/

/* // struct yapısıyla girilen tarih ve saati ekrana yazdırma
struct sure
{
    int saat;
    int dakika;    
};
struct takvim
{
    int yil;
    int ay;
    int gun;
    struct sure tarih;
};
int main ()
{
    takvim t;
    
    cout << "sirasiyla yil ay gun saat dakika giriniz" << endl;
    cin >> t.yil >> t.ay >> t.gun;
    cin >> t.tarih.saat >> t.tarih.dakika;
    cout << t.gun << "/" << t.ay << "/" << t.yil << '\t' << t.tarih.saat << ':' << t.tarih.dakika;
system("pause");
return 0;
}
*/

/* // union iki ya da daha fazla değişken trfndn ortaklasa kullanılan tek bir bellek birimi
 union recordtype 
 {
     char ch;
     int i;
     long l;
     float f;
     double d;
     int*int_ptr;
 };
 
 int main()
{
     recordtype t;
     
     t.i = 5; // t int saklıyor
     t.f = 7.25; // t float saklıyor
     cout << t.f << endl; // t.i şeklinde olsaydı ekrana yazmazdı, çünkü sadece bir tanesi ayrılan bellek birimini kullanabilir, en son atanan "t.f" ekrana yazar...
     system("pause");
     return 0;
}
*/

/* // struct yapısıyla eni ve boyu cm,m cinsinden girilen bölgenin çevresini hesaplama
struct olcu
{
    unsigned int metre;
    unsigned int cm;
};
int main ()
{
    olcu en;
    cout << "eni giriniz : ";
    cin >> en.metre >> en.cm;
    olcu boy;
    cout << "boyu giriniz : ";
    cin >> boy.metre >> boy.cm;
    olcu cevre;
    cevre.metre = 2*(en.metre+boy.metre);
    cevre.cm = 2*(en.cm+boy.cm);
    if (cevre.cm >= 100)
    {
        int ekle = cevre.cm / 100;
        int kalan = cevre.cm % 100;
        cevre.cm = kalan;
        cevre.metre += ekle;
    }
    cout << "en:" << en.metre << " m " << en.cm << " cm " << endl;
    cout << "boy:" << boy.metre << " m " << boy.cm << " cm " << endl;
    cout << "cevre:" << cevre.metre << " m " << cevre.cm << " cm " << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(olcu) << endl;
    system("pause");
    return 0;
}
*/

// DİZİLER

/* // diziler 
int main()
{
int n[5] = {2,12,13,4,18}; // 0,1,2,3,4 (5 sayı)
n[3] = 25; // dizideki 3. sayıya 25 değerini atadı!
for(int i=0 ; i<=5 ; i++) 
// i 5'e eşit veya 5'den büyük olsaydı ilk 5 elemandan sonrakilere 0 değerini verecekti!
// eğer eleman sayısı 5'den küçük olursa diğerleri 0 alır!
cout << n[i] << endl;
system("pause");
return 0;
}
*/

/* // diziler devam
int main ()
{
    const int ESAY = 20;
    int sayilar[ESAY] = {19,3,15,7,11,9,13,5,17,1}; // 10. elemandan sonraki elemanlar 0 değerini alacak!
    cout << setw(7) << "indis" << setw(8) << "deger" << endl;
    for(int i = 0 ; i < ESAY ; i++)
        cout << setw(5) << i << setw(8) << sayilar[i] << endl;
    system("pause");
    return 0;
}
*/

/* // diziler devam
const int ESAY = 20;
int main()
{
    int sayilar[ESAY];
    for (int i = 0; i < ESAY ; i++)
    {
        cin >> sayilar[i];
    }
    
    cout << endl;
    for (int i = 0; i < ESAY ; i++)
    {
        cout << left << setw(6) << sayilar[i];
        
        if ((i+1) % 5 == 0)
            cout << endl;        
    }
system ("pause");
return 0;
}
*/

/* // diziler devam
int main() 
{
    const int MAX = 5; // max karakter sayısı
    char str[MAX];
  //  cout << "karakter dizisi gir : ";
  //  cin.get(str,MAX); 
  //  cout << "girilen karaketer dizisi : " << str << endl;
    cout << "karakter dizisi (cok satir) gir : ";
    cin.get(str,MAX, '.'); // noktayı sonlandırma karakteri olarak sayar
    cout << "girilen karakter dizisi : " << str << endl;
    system("pause");
    return 0;
}
*/

/* // (dizi) yazılan karakterin uzunluğu ve tersten yazdırma
unsigned int x(unsigned int);
int main () 
{
    setlocale(LC_ALL, "turkish");
    
    const int MAX = 80;
    char str1[] = " aynasi istir kisinin lafa bakilmaz!... ";
    char str2[MAX];
    int uzunluk = strlen(str1); // uzunluğu döndürür
    
    cout << uzunluk << endl; 
    cout << endl;
    
    cout << endl;
    for (int i = 0; i < uzunluk; i++)  //tersten yazdırmak için
    {
        str2[i] = str1[(uzunluk-1)-i];
    }
    str2[uzunluk] = 0;
    cout << str2 << endl;
    cout << endl;
    
    system("pause");
    return 0;
}
*/

/* // girilen metni ters çeviren metotlar
int main ()
{
    string metin;
    
    cout << "metin giriniz : " << endl;
    getline(cin,metin); // getline => boşluğa okur
    metin = string(metin.rbegin(), metin.rend());
    cout << metin << endl;
    system("pause");
    return 0;
}
*/

/* // dizilerle ilgili soru
int main()
{
  char dizi[30]="idrisofradunya";
  for(int i=strlen(dizi)-1;i>0;i-=2)
      cout << dizi[i];
  
  cout << endl;
system("pause");
return 0;
}
*/

/* // diziler grafik yazdırma
const int ESAY = 27; // sabit olarak belirledik #define ESAY = 19 da yapabilirdik!
int main()
{
    int sayilar[ESAY] = {20,19,12,11,10,9,8,7,6,5,4,3,2,15,2,3,4,5,6,7,8,9,10,11,12,19,20};
    cout << setw(7) << "indis" << setw(8) << "deger" << setw(18) << "grafik" << endl;
    for (int i = 0; i < ESAY; i++)
    {
        cout << setw(5) << i << setw(8) << sayilar[i] << setw(15);
        for (int j = 0; j < sayilar[i]; j++) // yıldızlar için ayrı bir for döngüsü actık!
            cout << "*";
            cout << endl;
        
    }
    system("pause");
    return 0;
}
*/

/* // matrislerle karakter yazdırma 
int main()
{
    int b;
    cout << " boyutu giriniz : " << endl;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i<j)
                cout << "*";
                
                else
                    cout << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
*/

/* // tolower-toupper
int main() {
  // convert 'A' to lowercase
  char ch = tolower('A');
  cout << ch << endl;
  char ch2 = toupper('b');
  cout << ch2 << endl;
system("pause");
return 0;
}
*/

/* // isdigit-isalpha
int main() 
{
  cout << isdigit('9') << endl; // rakamsa 1(true)
  cout << isdigit('A') << endl; // rakamsa değilse 0(false)
  cout << endl;
  cout << isalpha('A') << endl; // harfse 1(true)
  cout << isalpha('9') << endl; // harf değilse 0(false)
system("pause");
return 0;
}
*/

/* // rastgele sayı üretimi (dizi)
//max rand sayı üretme aralıgı (0-32767) 
//cout << RAND_MAX << endl;
const int ESAY = 10;
int main()
{
int sayilar[ESAY];
cout << setw(5) << "indis" << setw(10) << "deger" << endl;
//her calıstırmada farklı random sayılar uretmesi ıcın srand(time(NULL));
srand(time(NULL));
    for (int i = 0; i < ESAY; i++)
{
    sayilar[i] = rand() % 100; // (0-99) arasında random sayılar üretir
    cout << setw(3) << i << setw(10) << sayilar[i] << endl; 
}
system("pause");
return 0;
}
*/

/* // cok boyutlu dızıler (satır ve sutun) 
const int satir = 5;
const int sutun = 5;
int main()
{
    int matris[satir][sutun];
    srand(time(0));
    for (int i = 0; i < satir; i++) // rastgele deger uretme
    {
        for (int j = 0; j < sutun; j++)
            matris[i][j] = rand() % 6 ;                    
    }
    for (int i = 0; i < satir; i++) // ekrana yazdırma
        {
        for (int j = 0; j < sutun; j++)
            cout << setw(5) << matris[i][j];                    
            cout << endl;
        }
    //cout << matris[0][0] + matris[5][4];
    system("pause");
    return 0;
}
*/

/* // girilen matrisin transpozesini alma
const int SATIR = 5;
const int SUTUN = 5;
int main () {
    int matrisA[SATIR][SUTUN];
    for (int i = 0; i < SATIR; i++)
    {
        for (int j = 0; j < SUTUN; j++)
        {  
            cout << i << "," << j << "  >= ";
            cin >> matrisA[i][j];
        }      
        cout << endl;
    }    
    cout << "girilen matris\n" << endl;
    for (int i = 0; i < SATIR; i++)
    {
        for (int j = 0; j < SUTUN; j++)
        {
            cout << setw(5) << matrisA[i][j];
          
        }
          cout << endl;
    }
    cout << endl;
    cout<< "matrisin tranpozu : \n" << endl;
        for(int i = 0 ; i < SATIR ; i++)
            {
                for(int j = 0 ; j < SUTUN ; j++)
                {  
                    cout << setw(5) << matrisA[j][i];
                }
                    cout << endl;  
            }    
system("pause");
return 0;
}
*/

/* // dizileri karşılaştırıp alt dizi bulma
int main()
{
    int a[3] = {1,2,3};
    int b[7] = {9,5,1,2,3,6,7};
    int Aboyut = 3;
    int Bboyut = 7;
    for (int i = 0; i < Bboyut; i++)
    {
        bool esit = true;
        for (int j = 0; j < Aboyut; j++)
        {
            if (a[j]!=b[i+j])
            {
            esit = false;
                break;
            }    
        }
        if(esit)
        {
            cout << "alt elemani vardir ve " << i << "'den baslar" << endl;
        }
    }
    system("pause");
    return 0;
}
*/

// SIRALAMA ÇEŞİTLERİ

/* // bubble sort 
const int ESAY = 10;
int main()
{
int gecici;
int sayilar[ESAY];
//rastgele değer üretme
srand(time(0));
for (int i = 0; i < ESAY; i++)
    sayilar[i] = rand() % 100;
cout << setw(5) << "indis" << setw(5) << "deger" << endl;
for(int i = 0; i < ESAY; i++)
cout << setw(5) << i << setw(5) << sayilar[i] << endl;
cout << "Bubble Sort........................." << endl;5;
for (int i = 0; i < ESAY; i++)
{
    for (int j = 0; j < ESAY; j++)
    {
        if (sayilar[j] > sayilar[j+1])
        {
            gecici = sayilar[j];
            sayilar[j] = sayilar[j+1];
            sayilar[j+1] = gecici;
        }  
    }
}
for (int i = 0; i < ESAY; i++)
{
    cout << setw(5) << i << setw(5) << sayilar[i] << endl;
}
system("pause");
return 0;
}
*/

// FONKSIYONLAR

/* // fonksiyon (isim yazdırma)
void isimYaz()  // void return komut satırı içermez.
{
    //for(int i = 0 ; i<10 ; i++)
    cout << "Yusuf GULMEZ" << endl;
}
int main () {
    isimYaz(); // fonksiyon çağrısı
    isimYaz();
    isimYaz();
system("pause");
}
*/

/* // fonksiyon prototipi (isim yazdırma)
void isimYaz(); // (Fonksiyon prototipi) fonksiyonu int main'den sonra tanımladığımız için 
int main()
{
    isimYaz();
system("pause");
}
void isimYaz(){
    //for(int i = 0 ; i<10 ; i++)
    cout << "Yusuf GULMEZ" << endl;
}
*/

/* // fonksiyon kare alma
int kareAl(int x)
{
    int sonuc = x*x;
return sonuc;
}
int main()
{
    cout << kareAl(11) << endl;
   
system("pause");
return 0;
}
*/

/* // fonksiyonlarla faktöriyel hesabı
void faktoriyel (int sayi)
{
    int faktoriyel =1;
    for (int i = 2; i <= sayi; i++)
    {
        faktoriyel *= i;
    }
    cout << "faktöriyel : " << faktoriyel << endl;
}
int main ()
{
    int sayi;
    cout << "bir sayi giriniz : ";
    cin >> sayi;
    faktoriyel(sayi);
system("pause");
return 0;
}
*/
 
/* // fonksiyonlara devam
void islem(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "-" ;
    }
    cout << endl;
}
int main()
{
    islem(10);
    cout << "Yusuf GULMEZ" << endl;
    islem(20);
    cout << "BSM" << endl;
    islem(10);
    cout << "B201200025\n";
    islem(20);
    system("pause");
    return 0;
}
*/

// NDP

/* // class yapısı 
class ogrenci // class ın sonunda }'den sonra ; kullanılır!
{
    public: 
    string ad;
    string soyad;
    int yas;
    float note;
};
int main()
{
    ogrenci ogrenci1,ogrenci2;
    ogrenci1.ad = "Yusuf";
    ogrenci2.ad = "Fahri";
    cout << ogrenci1.ad << endl;
    cout << ogrenci2.ad << endl;
system("pause;");
return 0;
}
*/

/* // class
class Sinif_adi 
{
    private: // dışarıdan direkt ulaşım yapılamaz (özel veriler ve fonksşyonlar)
    public: // dışarıdan direkt olarak ulaşılabilir (genel veriler ve fonksiyonlar)
    
    protected: // korunmuş veriler ve fonksiyonlar
} nesne_listesi;
class arac 
{
    int max_hiz;
    
    public:
    int model;
    char marka[10];
    void fren_yap(int ivme);
    void hizlan(int ivme);
    int hiz_Oku();
    
};
*/

/* // karmaşık sayılar 
class Karmasik
{
private:
    double gercel;
    double sanal;
public:
    void bilgigoster()
{
    cout << "sayinin degeri: " << gercel << "+" << sanal << "i" << endl;
}
void bilgisgir()
{
    cout << "sayinin gercel kismini giriniz: ";
    cin >> gercel;
    cout << "sayinin sanal kismini giriniz:";
    cin >> sanal;
}
private:
float radyandandereceye (float a)
{
    return a*180/3,14;
}
public:
void kutupsalcevir()
{
    cout << "\nsayinin kutupsal karsiligi: ";
    cout << sqrt (pow(gercel,2) + pow (sanal,2)) << " ";
    cout << radyandandereceye(atan(sanal/gercel));
}
};
*/

/* // class kullanımı
class mesafe
{
private:
    int metre;
    float cm;
public:
    void degerata (int met, float sant)
        {metre=met; cm=sant;}
    void degeral()
    {   cout << "\n metre gir  ";
        cin >> metre;
        cout << "\n cm gir  ";
        cin >> cm;
    }
void goster()
{
    cout << metre << "metre" << cm << "cm dir";
}
};
*/

/* // Private-Public
class ogrenci
{
    private:
    string ad;
    string soyad;
    int yas;
    float note;
    public:
    void bilgiGir()
    {
        cout << "adinizi giriniz : ";
        cin >> ad;
        cout << "soyadinizi giriniz : ";
        cin >> soyad;
        cout << "yasinizi giriniz : ";
        cin >> yas;
        cout << "notunuzu giriniz : ";
        cin >> note;
    }
};
int main()
{
    ogrenci ogr1, ogr2;
    ogr1.bilgiGir();
    ogr2.bilgiGir();
    system("pause");
    return 0;
}
*/

// POINTERLAR

/* // Pointerlara giriş 
int  main()
{
    int a = 5;
    int *ptr = &a;  
    cout << "degiskenin adresi : " << &a << endl;  // "&" değişkenin adresini gösterir
    cout << "degiskenin adresi : " << ptr << endl;  // "&" değişkenin adresini gösterir
    cout << "degiskenin degeri : " << *ptr << endl; // degiskenin degerini gosterir
    *ptr = 11; // degiskenin degeri 11 oldu
    cout << "degiskenin yeni degeri : " << a << endl;
    system("pause");
    return 0;
}
*/

/* // Pointerlara devam
void degerDegistir(int *ptr)
{
    *ptr = 20;
    cout << "fonksiyon icindeki deger : " << *ptr << endl;
}
int main()
{
    int a = 10; // ilk önce main fonksiyonu okuduğu için a'nın değeri 10 oldu!
    cout << "a degiskeninin degeri : " << a << endl; // ekrana ilk olarak 10 yazdı!
    degerDegistir(&a);
    cout << "fonksiyon bittikten sonra a degiskeninin degeri : " << a << endl;
    system("pause");
    return 0;
}
*/

/* // Pointer aritmetiği
int main()
{
    int array[] = {1, 2, 3, 4};
    int *ptr = array;
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << "pointerin yeni degeri : " << ptr << endl;
    system("pause");
    return 0;
}
*/

/* // Pointerlarda Const Kullanımı
void printArray(const int *ptr1, const int *ptr2)
{
    for (; ptr1 != ptr2; ptr1++) // pointerın gösterdiği adresi değişebilir ama değeri değişemez
    {
        cout << "eleman : " << *ptr1 << endl;
    }
}
int main()
{
    int array[] = {10,20,30,40,50,60,70,80,90,100};
    printArray(array + 2, array + 5);
    system("pause");
    return 0;
}
*/

/* // Pointerlarda struct yapısının kullanımı
struct ogrenci
{
    int id;
    string name;
    string deparment;
};
int main()
{
    ogrenci ogrenci1 = {201200025, "Yusuf GULMEZ", "Bilisim"};
    ogrenci *ptr = &ogrenci1;
    cout << ptr->id << endl; // pointerda -> işareti kullanlır 
    cout << ptr->name << endl;
    cout << ptr->deparment << endl;
    system("pause");
    return 0;
}
*/

/* // Pointer (adres ve değer)
int main()
{
    int *ptr;
    int a = 42;
    ptr = &a;
    cout << ptr << endl; // xyzt (42 değerinin bulunduğu adresi yazdı)
    cout << *ptr << endl; // 42 (a değerini yazdı)
    cout << &ptr << endl; // abcd (pointırın bulunduğu adresi yazdı)
    cout << &a << endl;  // xyzt (a'nın(42) bulunduğu adresi yazdı)
    cout << a << endl; // 42
    *ptr = 21;
    cout << *ptr << endl; // 21 (42 değerini 21 olarak değiştirdik)
    cout << ptr << endl; // xyzt (adreste herhangi bir değişiklik olmadı)
    int b;
    cout << &b << endl; // qwer (b'nin adresini atadı)
    system("pause");
    return 0;
}
*/