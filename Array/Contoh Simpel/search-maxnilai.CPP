#include <iostream>
using namespace std;

int main()
{
    // KAMUS
    int max, i;
    int TabInt[10];

    // ALGORITMA
    cout << "Masukkan Data 10 Nilai:" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabInt[i];
    }

    // Mencari nilai maksimum
    max = TabInt[0]; // insialisasi
    for (i = 1; i < 10; i++)
    {
        if (TabInt[i] > max)
        {
            max = TabInt[i];
        }
    }
    cout << "Nilai Maksimum: " << max << endl;
    return 0;
}