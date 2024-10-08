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
            cout << "Nilai Ujian        : " << data[x].nilai << endl;
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
        cout << "NIM yang dicari : ";
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
            cout << "========== DATA LAMA ==========\n";
            cout << "NIM                : " << data[x].nim << endl;
            cout << "Nama Mahasiswa     : " << data[x].nama << endl;
            cout << "Nilai Ujian        : " << data[x].nilai << endl;
            cout << endl;
            cout << "========== DATA BARU ==========\n";
            cout << "NIM                : ";
            cin >> data[x].nim;
            cout << "Nama Mahasiswa     : ";
            cin >> data[x].nama;
            cout << "Nilai Ujian        : ";
            cin >> data[x].nilai;
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

void hapusdata()
{
    // Proses hapus data
    char tanya;
    int nocari, temu, x, y;
    x = 0;
    system("cls");
    cout << "NIM yang inggin dicari : ";
    cin >> nocari;
    temu = 0;
    x = 0;
    y = 0;
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
        cout << "Data Ke            : " << x + 1 << endl;
        cout << "NIM                : " << data[x].nim << endl;
        cout << "Nama Mahasiswa     : " << data[x].nama << endl;
        cout << "Nilai Ujian        : " << data[x].nilai << endl;
        cout << endl;
        cout << endl;
        cout << "Yalin menghapus Data? [Y/T]";
        cin >> tanya;
        if (tanya == 'Y' || tanya == 'y')
        {
            x = 0;
            while (x < jdata)
            {
                if (data[x].nim != nocari)
                {
                    data[y].nim = data[x].nim;
                    data[y].nama = data[x].nama;
                    data[y].nilai = data[x].nilai;
                }
                x = x + 1;
            }
            jdata = y;
        }
    }
}

void cetakdata()
{
    system("cls");
    cout << "               DAFTAR NILAI UJIAN MAHASISWA" << endl;
    cout << "=========================================================\n";
    cout << "| NO |     NIM     |       NAMA MAHASISWA      |  NILAI |\n";
    cout << "---------------------------------------------------------\n";

    // Proses menampilkan data dari array
    for (x = 0; x < jdata; x++)
    {
        cout << "| " << setiosflags(ios::left) << setw(3) << x + 1 << "|";
        cout << " " << setiosflags(ios::left) << setw(12) << nim[x] << "|";
        cout << " " << setiosflags(ios::left) << setw(26) << nm[x] << "|";
        cout << " " << setiosflags(ios::left) << setw(7) << nl[x] << "|" << endl;
    }
    cout << "=========================================================" << endl;
    system("pause");
}

main()
{
    int pil;
    while (pilihan < 7)
    {
        system("cls");
        cout << "***************************************" << endl;
        cout << "*              MENU UTAMA             *" << endl;
        cout << "*-------------------------------------*" << endl;
        cout << "*          1] MASUKKAN DATA           *" << endl;
        cout << "*          2] TAMBAH DATA             *" << endl;
        cout << "*          3] CARI DATA               *" << endl;
        cout << "*          4] UBAH DATA               *" << endl;
        cout << "*          5] HAPUS DATA              *" << endl;
        cout << "*          6] CETAK DATA              *" << endl;
        cout << "*          7] SELESAI                 *" << endl;
        cout << "*                                     *" << endl;
        cout << "***************************************" << endl;
        cout << "        Masukkan Pilihan anda : ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            isidata();
        }
        if (pilihan == 2)
        {
            tambahdata();
        }
        if (pilihan == 3)
        {
            sequensial_search();
        }
        if (pilihan == 4)
        {
            ubahdata();
        }
        if (pilihan == 5)
        {
            hapusdata();
        }
        if (pilihan == 6)
        {
            cetakdata();
        }
    }
}
