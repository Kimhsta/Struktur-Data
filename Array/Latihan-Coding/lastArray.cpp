#include <iostream>
using namespace std;

int main()
{
    // KAMUS
    int IX, X, i; // X adalah nilai yang inggin dicari,IX adalah indexnya
    int TabIn[10];
    bool found;

    // ALGORITMA
    cout << "Masukkan 10 Nilai: " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabIn[i];
    }

    // Mencari suatu nilai yaitu X
    cout << "Nilai yang Inggin Dicari: ";
    cin >> X;

    i = 10;
    found = false;
    while ((i >= 0) && (!found))
    {
        if (TabIn[i] == X)
        {
            found = true;
        }
        else
        {
            i--;
        }
    }
    IX = i;
    cout << "Index terakhir " << X << " Adalah:  " << IX << endl;
}