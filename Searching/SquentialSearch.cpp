#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
using namespace std;

int nim[100];
string nm[100];
int nl[100];
int x, jdata, pilihan;

void isidata()
{
    // Proses memasukkan data
    char ulang;
    jdata = 0;
    x = 0;
    ulang = 'Y';
    while (ulang == 'Y' || ulang == 'y')
    {
        system("cls");
        cout << "Data Ke            : " << x + 1 << endl;
        cout << "NIM                : ";
        cin >> nim[x];
        cout << "Nama Mahasiswa     : ";
        cin >> nm[x];
        cout << "Nilai Ujia         : ";
        cin >> nl[x];
        cout << endl;

        jdata = jdata + 1;
        x = x + 1;
        cout << "Masih Ada Data Lagi? (Y/T) : ";
        cin >> ulang;
    }
}

void sequensial_search()
{
    char takon;
    int nocari, temu;
    takon = 'Y';
    while (takon == 'Y' || takon == 'y')
    {
        system("cls");
        cout << "NIM yang diCari? : ";
        cin >> nocari;
        temu = 0;
        x = 0;
        cout << endl;
        while ((temu == 0) && (x < jdata))
        {
            if (nim[x] == nocari)
            {
                temu = 1;
            }
            else
            {
                x = x + 1;
            }
        }
        if (temu == 1)
        {
            system("cls");
            cout << "Data Ke            : " << x + 1 << endl;
            cout << "NIM                : ";
            cin >> nim[x];
            cout << "Nama Mahasiswa     : ";
            cin >> nm[x];
            cout << "Nilai Ujia         : ";
            cin >> nl[x];
            cout << endl;
        }
        else
        {
            cout << "\n Maaf Data yang anda cari tidak ditemukan!!\n";
            getch();
        }
        cout << endl;
        cout << "Mau Cari Data Lain? (Y/T) : ";
        cin >> takon;
    }
}

int main()
{
    int pilihan;
    do
    {
        system("cls");
        cout << "***************************************" << endl;
        cout << "*              MENU UTAMA             *" << endl;
        cout << "*-------------------------------------*" << endl;
        cout << "*          1] INPUT DATA              *" << endl;
        cout << "*          2] PENCARIAN DATA          *" << endl;
        cout << "*          3] SELESAI                 *" << endl;
        cout << "*                                     *" << endl;
        cout << "***************************************" << endl;
        cout << "        Masukkan Pilihan anda = ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            isidata();
            break;
        case 2:
            sequensial_search();
            break;
        default:
            break;
        }
    } while (pilihan <= 2);
    return 0;
}