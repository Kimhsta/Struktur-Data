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
        cout << "Nilai Ujian        : ";
        cin >> nl[x];
        cout << endl;

        jdata = jdata + 1;
        x = x + 1;
        cout << "Masih Ada Data Lagi? (Y/T) : ";
        cin >> ulang;
    }
}

void binary_search()
{
    int nocari, atas, bawah, tengah;
    char takon;
    takon = 'Y';
    while (takon == 'Y' || takon == 'y')
    {
        system("cls");
        cout << "Masukan NIM yang dicari: ";
        cin >> nocari;
        atas = 0;
        bawah = jdata - 1;
        tengah = (atas + bawah) / 2;
        while (atas <= bawah)
        {
            if (nim[tengah] < nocari)
            {
                atas = tengah + 1;
            }
            else if (nim[tengah] == nocari)
            {
                cout << endl;
                cout << "Data ke        : " << tengah + 1 << endl;
                cout << "NIM            : " << nim[tengah] << endl;
                cout << "Nama Mahasiswa : " << nm[tengah] << endl;
                cout << "Nilai Ujian    : " << nim[tengah] << endl;
                cout << endl;
                break;
            }
            else
            {
                bawah = tengah - 1;
            }
            tengah = (atas + atas) / 2;
            if (atas > bawah)
            {
                cout << endl;
                cout << "Tidak ditemkan \n";
                cout << nocari << " Tidak termasuk dalam inputan \n";
                getch();
            }
        }
        cout << endl;
        cout << "Mau cari Data Lagi (Y/T) :";
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
            binary_search();
            break;
        default:
            break;
        }
    } while (pilihan <= 2);
    return 0;
}