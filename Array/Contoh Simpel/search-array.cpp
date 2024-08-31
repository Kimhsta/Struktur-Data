#include <iostream>
using namespace std;

int main()
{
    // KAMUS
    int X, i;
    bool found;
    int TabInt[10];

    // ALGORITMA
    // Pengisian data : asumsi array terisi
    cout << "Masukkan 10 angka untuk mengisi array:" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> TabInt[i];
    }

    // mencari suatu nilai, yaitu X
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> X;
    i = 0;
    found = false;
    while ((i < 10) && (!found))
    {
        if (TabInt[i] == X)
        {
            found = true;
        }
        else
        {
            i++;
        }
    } // i = 10 atau found
    if (found)
    { // X ada di..
        cout << X << " ada di index " << i << endl;
    }
    else
    {
        cout << X << " tidak ditemukan" << endl;
    }
    return 0;
}
