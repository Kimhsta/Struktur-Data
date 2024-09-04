#include <iostream>
using namespace std;

int main()
{
    int nilai[5][2] = {
        {100, 90},
        {90, 80},
        {78, 100},
        {90, 90},
        {66, 100}};

    int baris, kolom;
    cout << "Isi dari array dua dimensi nilai[5][2] : \n";
    for (baris = 0; baris < 5; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            cout << nilai[baris][kolom] << " , ";
        }
        cout << endl;
    }
    return 0;
}
