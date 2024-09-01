#include <iostream>
using namespace std;

int main()
{
    // KAMUS
    int idxmax, i;
    int TabInt[10];

    // ALGORITMA
    cout << "Masukkan Data 10 Nilai:" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabInt[i];
    }

    // Mencari nilai maksimum
    idxmax = 0;
    for (i = 1; i < 10; i++)
    {
        if (TabInt[i] > TabInt[idxmax])
        {
            idxmax = i;
        }
    }
    cout << "Nilai Maksimum: " << idxmax << endl;
    return 0;
}