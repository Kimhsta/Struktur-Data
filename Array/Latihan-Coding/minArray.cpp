#include <iostream>
using namespace std;

int main()
{
    // KAMUS
    int i, min;
    int TabInt[10]; // Deklarasi array of charakter berukuran 10

    // ALGORITMA
    cout << "Masukkan Nilai:  " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabInt[i];
    }

    // Menulis Kembali Ke Layar
    min = TabInt[0]; // inisialisai min dgn element ke-0
    for (i = 1; i < 10; i++)
    {
        if (TabInt[i] < min)
        {
            min = TabInt[i];
        }
    }
    cout << "Nilai Minimum adalah: " << min << endl;
    return 0;
}