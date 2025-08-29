//**********************************************************************************
//*Geliştirici: Yusuf GÜLMEZ                                                       *
//*Öğrenci No: B201200025                                                          *    
//*Ödev No: 3                                                                      *
//*Ödev Açıklama: Bir Ürünü Oluşturmak İçin Gerekli Malzemeler Ve Üretim Zamanı    *
//**********************************************************************************

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

using namespace std;

const int a1 = 5;
const int b1 = 7;
const int c1 = 3;
const int d1 = 12;


void gerekliMalzeme (int*K, int*L, int*M)
{
    int gerekliA[] = {20, 58, 70, 63, 80};
    int gerekliB[] = {10, 30, 45, 58, 70, 10, 12};
    int gerekliC[] = {20, 82, 40};

    for (int i = 0; i < a1; i++)
    {
        K[i] = gerekliA[i];
    }
    
    for (int i = 0; i < b1; i++)
    {
        L[i] = gerekliB[i];
    }
    
    for (int i = 0; i < c1; i++)
    {
        M[i] = gerekliC[i];
    }    
}

void rastDepoDoldur (int*K, int*L, int*M)
{
    srand(time(NULL));

    for (int i = 0; i < a1; i++)
    {
        K[i] = rand() % 101;
    }
    
    for (int i = 0; i < b1; i++)
    {
        L[i] = rand() % 101;
    }
    
    for (int i = 0; i < c1; i++)
    {
        M[i] = rand() % 101;
    }    
}

void ihtiyacDuyulan (int*K, int*L, int*M)
{
    int a2[a1], b2[b1], c2[c1];
    int a3[a1], b3[b1], c3[c1];

    rastDepoDoldur(a2, b2, c2);
    gerekliMalzeme(a3, b3, c3);

    for (int i = 0; i < a1; i++)
    {
        K[i] = a3[i] - a2[i];
    }
    
    for (int i = 0; i < b1; i++)
    {
        L[i] = b3[i] - b2[i];
    }
    
    for (int i = 0; i < c1; i++)
    {
        M[i] = c3[i] - c2[i];
    }
}

void uretimZamani (int*K, int*L, int*M)
{
    int uretimZamaniA[] = {2, 5, 7, 6, 8};
    int uretimZamaniB[] = {1, 3, 4, 5, 7, 10, 12};
    int uretimZamaniC[] = {2, 8, 4};

    for (int i = 0; i < a1; i++)
    {
        K[i]=uretimZamaniA[i];
    }
  
    for (int i = 0; i < b1; i++)
    {
        L[i]=uretimZamaniB[i];
    }
  
    for (int i = 0; i < c1; i++)
    {
        M[i]=uretimZamaniC[i];
    }
}

void ihtiyacDuyulanZamn(int*K, int*L, int*M)
{
    int a2[a1], b2[b1], c2[c1];
    int a3[a1], b3[b1], c3[c1];

    ihtiyacDuyulan(a2, b2, c2);
    uretimZamani(a3, b3, c3);

    for (int i = 0; i < a1; i++)
    {
        if (a2[i] > 0)
        {
            K[0] += a2[i] * a3[i];
        }
        
    }
    
    for (int i = 0; i < b1; i++)
    {
        if (b2[i] > 0)
        {
            L[0] += b2[i] * b3[i];
        }
        
    }
    
    for (int i = 0; i < c1; i++)
    {
        if (c2[i] > 0)
        {
            M[0] += c2[i] * c3[i];
        }
        
    }   
}

void	dosyaya_yaz(ofstream &dosya_yaz)
{
	int montaj_A = 3, montaj_B = 7, montaj_C = 8, montaj_urun = 12;
	int ihtiyacDuyulanZamanA[] = {0};
	int ihtiyacDuyulanZamanB[] = {0};
	int ihtiyacDuyulanZamanC[] = {0};
	
    ihtiyacDuyulanZamn (ihtiyacDuyulanZamanA, ihtiyacDuyulanZamanB, ihtiyacDuyulanZamanC);
	
	dosya_yaz.open("b201200025.txt");
	
	dosya_yaz << "       TOPLAM GEREKLI SURE            "<<endl;
	dosya_yaz << "o^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^o" << endl;
	dosya_yaz << " -A Parcasi   : " <<ihtiyacDuyulanZamanA[0] << " gun"<< endl;
	dosya_yaz << " -A Montaj    : " << montaj_A <<  " gun"<<endl;
	dosya_yaz <<  endl;
	dosya_yaz << " -B Parcasi   : " << ihtiyacDuyulanZamanB[0] << " gun"<< "     " <<endl;
	dosya_yaz << " -B Montaj    : " << montaj_B <<  " gun"<<endl;
	dosya_yaz << endl;
	dosya_yaz << " -C Parcasi   : " << ihtiyacDuyulanZamanC[0] <<  " gun"<<"    " <<endl;
	dosya_yaz << " -C Montaj    : " << montaj_C <<   " gun"<<"   " << endl;
	dosya_yaz << endl;
	dosya_yaz << " -Urun Montaj : " << montaj_urun <<" gun"<< "  "<< endl;
	dosya_yaz << "o^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^o" << endl;
	dosya_yaz << "Toplam = " << ihtiyacDuyulanZamanA[0] + montaj_A + ihtiyacDuyulanZamanB[0] + montaj_B + ihtiyacDuyulanZamanC[0] + montaj_C + montaj_urun<< " gun" << endl;
    
	dosya_yaz.close();

}

void	dosyayi_oku(ifstream &dosya_oku)
{
	string	satir;
	dosya_oku.open("b201200025.txt");
	
	while(getline(dosya_oku, satir))
	{
		cout <<" "<< satir << endl;
	}

	dosya_oku.close();

    cout << endl;

    cout << "             ^ ^" << endl; 
    cout << "Hoscakalin..{\370.\370}" << endl;
    cout << "             \134\137\57" << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "turkish");

	int K[a1];
	int L[b1];
	int	M[c1];	
		
	int	gerekliA[a1];
	int	gerekliB[b1];
	int	gerekliC[c1];

	int ihtiyacduyulanA[a1];
	int ihtiyacDuyulanB[b1];
	int ihtiyacDuyulanC[c1];

	int uretimZamaniA[a1];
	int uretimZamaniB[b1];
	int uretimZamaniC[c1];

	int ihtiyacDuyulanZamanA[] = {0};
	int ihtiyacDuyulanZamanB[] = {0};
	int ihtiyacDuyulanZamanC[] = {0};
	
	ofstream	dosya_yaz; 
	ifstream	dosya_oku;
	
	rastDepoDoldur(K, L, M);
	
	gerekliMalzeme(gerekliA, gerekliB, gerekliC);
	
	ihtiyacDuyulan(ihtiyacduyulanA, ihtiyacDuyulanB, ihtiyacDuyulanC);
	
	uretimZamani(uretimZamaniA, uretimZamaniB, uretimZamaniC);
	
	ihtiyacDuyulanZamn(ihtiyacDuyulanZamanA, ihtiyacDuyulanZamanB, ihtiyacDuyulanZamanC);
	

	cout << "  A Parcasi Bilgileri" << endl;
	cout << "----------------------------------------------------------------------------" << endl << "  Gerekli Malzeme" << endl;
	cout << "  ";
	for (int i = 0; i < a1; i++)
	{
		cout << "a" << i + 1 << " = " << gerekliA[i] << "br" << '\t';
	}

	cout << endl << endl << "  Depo Durumu" << endl;
	cout << "  ";
	for (int i = 0; i < a1; i++)
	{
		cout << "a" << i + 1 << " = " << K[i] << "br" << '\t';
	}

	cout << endl << endl << "  ihtiyac Duyulan Malzeme" << endl;
	cout << "  ";
	for (int i = 0; i < a1; i++)
	{
		if(ihtiyacduyulanA[i] > 0)
			cout << "a" << i + 1 << " = " << ihtiyacduyulanA[i] << "br" << '\t';
		else
			cout << "a" << i + 1 << " = " << "0" << "br" << '\t';	
	}

	cout << endl << endl << "  Birim Basina Uretim Zamani" << endl;
	cout << "  ";
	for (int i = 0; i < a1; i++)
	{
		cout << "a" << i + 1 << " = " << uretimZamaniA[i] << "gun" << '\t';
	}

	cout << endl << endl << "  A Parcasi Icin Gereken Zaman : " << ihtiyacDuyulanZamanA[0] << " gun" << endl;
	cout << "----------------------------------------------------------------------------";
	cout << endl << endl << endl << endl;
	
	cout << "  B Parcasi Bilgileri" << endl;
	cout << "------------------------------------------------------------------------------------------------------------" << endl << "  Gerekli Malzeme" << endl;
	cout << "  ";
	for (int i = 0; i < b1; i++)
	{
		cout << "b" << i + 1 << " = " << gerekliB[i] << "br" << '\t';
	}

	cout << endl << endl << "  Depo Durumu" << endl;
	cout << "  ";
	for (int i = 0; i < b1; i++)
	{
		cout << "b" << i + 1 << " = " << L[i] << "br" << '\t';
	}

	cout << endl << endl << "  ihtiyac Duyulan Malzeme" << endl;
	cout << "  ";
	for (int i = 0; i < b1; i++)
	{
		if(ihtiyacDuyulanB[i] > 0)
			cout << "b" << i + 1 << " = " << ihtiyacDuyulanB[i] << "br" << '\t';
		else
			cout << "b" << i + 1 << " = " << "0" << "br" << '\t';
	}

	cout << endl << endl << "  Birim Basina Uretim Zamani" << endl;
	cout << "  ";
	for (int i = 0; i < b1; i++)
	{
		cout << "b" << i + 1 << " = " << uretimZamaniB[i] << "gun" << '\t';
	}

	cout << endl << endl << "  B Parcasi Icin Gereken Zaman : " << ihtiyacDuyulanZamanB[0] << " gun" << endl;
	cout << "------------------------------------------------------------------------------------------------------------";
	cout << endl << endl << endl << endl;
	
	cout << "  C Parcasi Bilgileri" << endl;
	cout << "--------------------------------------------" << endl << "  Gerekli Malzeme" << endl;
	cout << "  ";
	for (int i = 0; i < c1; i++)
	{
		cout << "c" << i + 1 << " = " << gerekliC[i] << "br" << '\t';
	}
	
	cout << endl << endl << "  Depo Durumu" << endl;
	cout << "  ";
	for (int i = 0; i < c1; i++)
	{
		cout << "c" << i + 1 << " = " << M[i] << "br" << '\t';
	}

	cout << endl << endl << "  Ihtiyac Duyulan Malzeme" << endl;
	cout << "  ";
	for (int i = 0; i < c1; i++)
	{
		if(ihtiyacDuyulanC[i] > 0)	
			cout << "c" << i + 1 << " = " << ihtiyacDuyulanC[i] << "br" << '\t';
		else
			cout << "c" << i + 1 << " = " << "0" << "br" << '\t';	
	}
	
	cout << endl << endl << "  Birim Basina Uretim Zamani" << endl;
	cout << "  ";
	for (int i = 0; i < c1; i++)
	{
		cout << "c" << i + 1 << " = " << uretimZamaniC[i] << "gun" << '\t';
	}

	cout << endl << endl << "  C Parcasi Icin Gereken Zaman : " << ihtiyacDuyulanZamanC[0] << " gun" << endl;
	cout << "--------------------------------------------";
	cout << endl << endl << endl;

	dosyaya_yaz(dosya_yaz); 
	dosyayi_oku(dosya_oku);
	
	system("pause");
}
