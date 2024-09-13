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
