#include <iostream>
using namespace std;

int main()
{
    // KAMUS
    int i, coutA;
    char TabInt[10]; // Deklarasi array of charakter berukuran 10

    // ALGORITMA
    cout << "Masukkan 10 Nama:  " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabInt[i];
    }

    // Menulis Kembali Ke Layar
    coutA = 0;
    for (i = 1; i < 10; i++)
    {
        cout << TabInt[i] << endl;
        if (TabInt[i] == 'A' || TabInt[i] == 'a')
        {
            coutA++;
        }
    }
    cout << "Nilai Minimum adalah: " << coutA << endl;
    return 0;
}