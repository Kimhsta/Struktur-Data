#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
string nama[5];
float nilai[5];
float total = 0;
int i;

void isidata()
{
    // Proses memasukkan data ke Array
    system("cls");
    for (i = 0; i < 2; i++)
    {
        cout << "Nomor            : " << (i + 1) << endl;
        cout << "Nama Mahasiswa   : ";
        cin >> nama[i];
        cout << "Nilai Ujian      : ";
        cin >> nilai[i];
        cout << endl;
    }
}

void cetakdata()
{
    // Proses menampilkan data dari array
    system("cls");
    total = 0;
    cout << "     DAFTAR NILAI UJIAN MAHASISWA";
    cout << endl;
    cout << "========================================" << endl;
    cout << "| NO |     NAMA MAHASISWA      | NILAI |" << endl;
    cout << "----------------------------------------" << endl;

    for (i = 0; i < 2; i++)
    {
        cout << "| " << setiosflags(ios::left) << setw(3) << i + 1 << "|";
        cout << " " << setiosflags(ios::left) << setw(25) << nama[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(5) << nilai[i] << "|" << endl;
        total = total + nilai[i];
    }
    cout << "========================================" << endl;

    // Proses menghitung nilai rata-rata
    cout << "Nilai rata-rata Mahasiswa adalah: " << (total / i) << endl;
    cout << "========================================" << endl;
    system("pause");
}

int main()
{
    int p;
    p = 1;
    do
    {
        system("cls");
        cout << "***************************************" << endl;
        cout << "*              MENU UTAMA             *" << endl;
        cout << "*-------------------------------------*" << endl;
        cout << "*          1] ISI DATA                *" << endl;
        cout << "*          2] CETAK DATA              *" << endl;
        cout << "*          3] SELESAI                 *" << endl;
        cout << "*                                     *" << endl;
        cout << "***************************************" << endl;
        cout << "        Masukkan Pilihan anda = ";
        cin >> p;

        switch (p)
        {
        case 1:
            isidata();
            break;
        case 2:
            cetakdata();
            break;
        default:
            break;
        }
    } while (p <= 2);
}