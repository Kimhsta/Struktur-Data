#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
int main()
{
    string nama[5];
    float nilai[5];
    float total = 0;
    int i;

    // Proses memasukkan data ke Array
    cout << "Masukkan Nilai Ujian mahasiswa [5 mahasiswa] : \n";
    for (i = 0; i < 5; i++)
    {
        cout << "Nomor            : " << (i + 1) << endl;
        cout << "Nama Mahasiswa   : ";
        cin >> nama[i];
        cout << "Nilai Ujian      : ";
        cin >> nilai[i];
        cout << endl;
    }

    // Proses menampilkan data dari array
    system("cls");
    total = 0;
    cout << "     DAFTAR NILAI UJIAN MAHASISWA";
    cout << endl;
    cout << "========================================" << endl;
    cout << "| NO |     NAMA MAHASISWA      | NILAI |" << endl;
    cout << "----------------------------------------" << endl;

    for (i = 0; i < 5; i++)
    {
        cout << "| " << setiosflags(ios::left) << setw(3) << i + 1 << "|";
        cout << " " << setiosflags(ios::left) << setw(25) << nama[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(5) << nilai[i] << "|" << endl;
        total = total + nilai[i];
    }
    cout << "========================================" << endl;

    // Proses menghitung nilai rata-rata
    cout << "Nilai rata-rata Mahasiswa adalah: " << (total / i);

    return 0;
}