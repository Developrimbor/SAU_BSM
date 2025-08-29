

//********************************************************************
//*Geliştirici: Yusuf GÜLMEZ                                         *
//*Öğrenci No: B201200025                                            *
//*Ödev No: 2                                                        *
//*Ödev Açıklama: Matris Oluşturma, Matris İşlemleri ve Şifreleme    *
//********************************************************************

#include <iostream>
#include <iomanip>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <ctime> 
#include <cmath>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "turkish");

    const int X = 5; 
    const int Y = 5;
    const int Z = 5;
    int satir, sutun, islem, sayi;
    char ch;
    int matrisA [X][Y];
    int matrisB [X][Y];
    int matrisC [X][Y];
    
    do
    {
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            matrisC[i][j] = 0;
        }
    }
    
    cout << "A Matrisinin Elemanlarini Giriniz: ([0-10])\n" << endl;
    
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y;j++)
        {
            cout << "A" << '['<<i<<']' << '['<<j<<']' << " = "; 
            cin >> sayi;               
            
            if(sayi < 0)      
			sayi *= -1;

            matrisA[i][j] = sayi % 11; // 10 dan buyuk bir sayı girdiğimizde... 
       }
        cout << endl;
    }
    
    cout << "A Matrisi\n" << endl;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            cout  << setw(5) << matrisA[i][j];        
        }   
        cout << endl;
    }
    
    cout << endl;
    cout << "B Matrisi\n" << endl;   // rastgele yazdırma 5x5
 
    srand(time(0));

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
            matrisB[i][j] = rand() % 11;        
    }

    for (int i = 0; i < X; i++)
    {      
        for (int j = 0; j < Y; j++)
        
        cout << setw(5) << matrisB[i][j];
        cout << endl;
    }    
    cout << endl;
    cout << "Bir Islem Seciniz : ( + --> press 1, * --> press 2 ) : ";
    cin >> islem;
    cout << endl;
    
    switch (islem)
    {
    case 1:
        for (int i = 0; i < X; i++)
        {
            for (int j = 0; j < Y; j++)
            {
            matrisC[i][j] = matrisA[i][j] + matrisB[i][j];
            }
        }
    break;

    case 2:
        for (int i = 0; i < X; i++)
        {
            for (int j = 0; j < Y; j++)
            {
                for (int k = 0; k < Z; k++)
                {
                matrisC[i][j] += matrisA[i][k] * matrisB[k][j];
                }               
            }
        }  
    break;

    default:  
            cout << "Yanlis Karakter Girdiniz, Lutfen Tekrar Deneyiniz" << endl;
    break;
        }
            cout << "Sonuc Matrisi\n" << endl;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            cout << setw(5) << matrisC[i][j];            
                  
        }
    cout << endl;
    }

    cout << "Sifrelemek Istediginiz Satir ve Sutun Numaralarini Sirasiyla Giriniz... [1-5] : " << endl;
    cin >> satir;
    cin >> sutun;
        
    satir -= 1;
    sutun -= 1;    
   
    for (int i = 0; i < X; i++)
    {
        if (satir == i)
        {
            for (int j = 0; j < Y; j++)
            {
                matrisC[satir][j] = 123;
            }
        }
    }

    for (int j = 0; j < Y; j++)
    {
        if (sutun == j)
        {
            for (int i = 0; i < X; i++)
            {
                matrisC[i][sutun] = 123;
            }   
        }
    }

     for (int  i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            if (matrisC[i][j] != 123)            
                cout << setw(5) << matrisC[i][j];
            else if(matrisC[i][j] == 123)
                cout << setw(5) << "*";                        
        }
        cout << endl;
    }
    do
        {
            cout << "\nen bastan baslamak ister misiniz ? (e/h) : \n";
            cin >> ch;
        } while (!(ch == 'e' || ch == 'h'));

     }while (ch != 'h');
    
    cout << endl;
    cout << "Hoscakalin..{\370_\370}\n" << endl;

system("pause");
return 0;
}
