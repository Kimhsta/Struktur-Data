#include <iostream>
using namespace std;

int main()
{
    // KAMUS
    int frek, i, X;
    int TabNilai[10];

    // ALGORITMA
    cout << "Masukkan Data: " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabNilai[i];
    }
    cin >> X;

    // Nilai yang inggin dicari?
    cout << "Data Input: ";
    cin >> X;

    // Menghitung Nilai Frekuesnsi X
    frek = 0;
    for (i = 0; i < 10; i++)
    {
        if (TabNilai[i] == X)
        {
            frek = frek + 1;
        }
    }
    cout << "Frekuensi " << X << " = " << frek << endl;
    return 0;
}