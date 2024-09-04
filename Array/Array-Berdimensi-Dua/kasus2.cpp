#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string nama[4];
    int nilai[5][3];
    int baris, kolom, jdata;
    char tanya;

    // Masukkan Nama Mahasiswa
    tanya = 'Y';
    baris = 0;
    jdata = 0;
    while (tanya == 'Y')
    {
        cout << "DATA KE : " << baris + 1 << endl;
        cout << "NAMA MAHASISWA : ";
        cin >> nama[baris];
        for (kolom = 0; kolom < 3; kolom++)
        {
            cout << "Minggu Ke- " << kolom + 1 << " : ";
            cin >> nilai[baris][kolom];
        }
        baris++;
        jdata++;
        cout << endl;
        cout << "Masih ada Data lagi? (Y/T) : ";
        cin >> tanya;
    }

    // Cetak Data
    system("cls");
    cout << "             DAFTAR PEROLEHAN NILAI MAHASISWA \n";
    cout << "============================================================\n";
    cout << "| NO |    NAMA MAHASIWA   | MINGGU-1 | MINGGU-2 | MINGGU-3 |\n";
    cout << "------------------------------------------------------------\n";
    for (baris = 0; baris < jdata; baris++)
    {
        cout << "| " << setiosflags(ios::left) << setw(3) << baris + 1 << "|";
        cout << " " << setiosflags(ios::left) << setw(19) << nama[baris] << "|";
        for (kolom = 0; kolom < 3; kolom++)
        {
            cout << " " << setiosflags(ios::left) << setw(9) << nilai[baris][kolom] << "|";
        }
        cout << endl;
    }
    cout << "============================================================\n";
}
