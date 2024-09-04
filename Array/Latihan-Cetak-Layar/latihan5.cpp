#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>

using namespace std;
string nama[5], gol[5];
float gp, tj, gt;
double jtot;
int i, jdata;

void isidata()
{
    string tanya;
    tanya = "Y";
    i = 0;
    jdata = 0;
    while (tanya == "Y")
    {
        system("cls");
        cout << "Nomor          : " << (i + 1) << endl;
        cout << "Nama Pegawai   : ";
        cin >> nama[i];
        cout << "Golongan       : ";
        cin >> gol[i];
        i = i + 1;
        cout << endl;
        cout << "Masih ada Data lagi? (Y/T) : ";
        cin >> tanya;
    }
}

void cetakdata()
{

    // Proses menampilkan data array
    system("cls");
    cout << "                        DAFTAR GAJI PEGAWAI                           " << endl;
    cout << "=====================================================================\n";
    cout << "| No | Nama Pegawai    | Golongan | Gaji Pokok | Tunjangan | Total  |\n";
    cout << "---------------------------------------------------------------------\n";
    jdata = i;
    jtot = 0;
    for (i = 0; i < jdata; i++)
    {
        if (gol[i] == "A")
        {
            gp = 500000;
            tj = 0.10 * gp;
        }
        else if (gol[i] == "B")
        {
            gp = 400000;
            tj = 0.07 * gp;
        }
        else
        {
            gp = 300000;
            tj = 0.05 * gp;
        }

        gt = gp + tj;
        jtot = jtot + gt;

        cout << "| " << setiosflags(ios::left) << setw(3) << i + 1 << "|";
        cout << " " << setiosflags(ios::left) << setw(16) << nama[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(10) << gol[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(10) << gp << "|";
        cout << " " << setiosflags(ios::left) << setw(10) << tj << "|";
        cout << " " << setiosflags(ios::left) << setw(7) << gt << "|" << endl;
    }
    cout << "=====================================================================" << endl;
    cout << "|                              JUMLAH : " << setiosflags(ios::left) << setw(27) << jtot << " |" << endl;
    cout << "=====================================================================" << endl;
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