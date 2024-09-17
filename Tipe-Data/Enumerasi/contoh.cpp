#include <iostream>
using namespace std;

int main()
{
    enum arah
    {
        utara = 1,
        barat,
        selatan,
        timur
    };
    int pilih;
    cout << "Masukkan Arah : " << endl;
    cout << "1. Arah Utara " << endl;
    cout << "2. Arah Barat " << endl;
    cout << "3. Arah Selatan " << endl;
    cout << "4. Arah Timur " << endl;
    cout << "pilih [1-4] : ";
    cin >> pilih;

    switch (pilih)
    {
    case utara:
        cout << "Utara";
        break;
    case barat:
        cout << "Barat";
        break;
    case selatan:
        cout << "Sealatan";
        break;
    case timur:
        cout << "Timur";
        break;

    default:
        cout << "Salah Pilihan Cik!?";
        break;
    }
    getc;
}
