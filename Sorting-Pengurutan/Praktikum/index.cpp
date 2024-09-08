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

void tambahdata()
{
    // Proses menambhakan data
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
            cout << "NIM                : " << nim[x] << endl;
            cout << "Nama Mahasiswa     : " << nm[x] << endl;
            cout << "Nilai Ujia         : " << nl[x] << endl;
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

void ubahdata()
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
            cout << "NIM                : " << nim[x] << endl;
            cout << "Nama Mahasiswa     : " << nm[x] << endl;
            cout << "Nilai Ujia         : " << nl[x] << endl;
            cout << endl;
            cout << "NIM                : ";
            cin >> nim[x];
            cout << "Nama Mahasiswa     : ";
            cin >> nm[x];
            cout << "Nilai Ujian        : ";
            cin >> nl[x];
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

// URUTAN KECIL KE BESAR
void bubbleSort()
{
    int j;
    int nim_temp;
    string nm_temp;
    int nl_temp;

    for (x = 1; x < jdata; x++)
    {
        for (j = jdata - 1; j >= x; j--)
        {
            if (nl[j] < nl[j - 1])
            {
                // temp = arr[minIndex];
                nim_temp = nim[z];
                nm_temp = nm[z];
                nl_temp = nl[z];

                // arr[minIndex] = arr[i];
                nim[z] = nim[x];
                nm[z] = nm[x];
                nl[z] = nl[x];

                // arr[i] = temp;
                nim[x] = nim_temp;
                nm[x] = nim_temp;
                nl[x] = nl_temp;
            }
        }
    }
}

// URUTAN BESAR KE KECIL
void inserSort()
{
    int j;
    int nim_temp;
    string nm_temp;
    int nl_temp;

    x = 1;
    while (x < jdata)
    {
        nim_temp = nim[x];
        nm_temp = nm[x];
        nl_temp = nl[x];

        for (j = x; j > 0; j--)
        {
            if (nl_temp > nl[j - 1])
            {
                nim[j] = nim[j - 1];
                nm[j] = nm[j - 1];
                nl[j] = nl[j - 1];
            }
            else
                break;
        }
        nim[j] = nim_temp;
        nm[j] = nim_temp;
        nl[j] = nl_temp;
        x++;
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