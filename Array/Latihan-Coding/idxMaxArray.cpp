#include <iostream>
using namespace std;

int main()
{
    // KAMUS
    int i, idxmin;
    int TabInt[10]; // Deklarasi array of charakter berukuran 10

    // ALGORITMA
    cout << "Masukkan Nilai:  " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabInt[i];
    }

    // Menulis Kembali Ke Layar
    idxmin = 0;
    for (i = 1; i < 10; i++)
    {
        if (TabInt[i] < TabInt[idxmin])
        {
            idxmin = i;
        }
    }
    cout << "Index Nilai Minimum adalah: " << idxmin << endl;
    return 0;
}