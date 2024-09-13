#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct mhs
{
    string nama;
    int nim, nilai;
};

struct mhs data[100];
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
        cout << "Data ke                : " << x + 1 << endl;
        cout << "No. Induk Mahasiswa    : ";
        cin >> data[x].nim;
        cout << "Nama Mahasiswa         : ";
        cin >> data[x].nama;
        cout << "Nilai Ujian            : ";
        cin >> data[x].nilai;
        cout << endl;
        jdata = jdata + 1;
        x = x + 1;
        cout << "Masih ada Data lagi? (Y/T) : ";
        cin >> ulang;
    }
}

void tambahdata()
{
    // Proses menambah data
    char ulang;
    x = jdata;
    ulang = 'Y';
    while (ulang == 'Y' || ulang == 'y')
    {
        system("cls");
        cout << "Data ke                : " << x + 1 << endl;
        cout << "No. Induk Mahasiswa    : ";
        cin >> data[x].nim;
        cout << "Nama Mahasiswa         : ";
        cin >> data[x].nama;
        cout << "Nilai Ujian            : ";
        cin >> data[x].nilai;
        cout << endl;
        jdata = jdata + 1;
        x = x + 1;
        cout << "Masih Tambah Data lagi? (Y/T) : ";
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
            if (data[x] == nocari)
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
            cout << "NIM                : " << data[x].nim << endl;
            cout << "Nama Mahasiswa     : " << data[x].nama << endl;
            cout << "Nilai Ujia         : " << data[x].nilai << endl;
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