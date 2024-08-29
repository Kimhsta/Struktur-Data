#include <iostream>
using namespace std;

int main()
{
    // KAMUS
    string nama1, nama2, nama3;

    // ALGORITMA
    cout << "Masukkan nama pertama: ";
    cin >> nama1;
    cout << "Masukkan nama kedua: ";
    cin >> nama2;
    cout << "Masukkan nama ketiga: ";
    cin >> nama3;

    // Menampilkan semua kombinasi pasangan nama
    cout << nama1 << " - " << nama2 << endl;
    cout << nama1 << " - " << nama3 << endl;
    cout << nama2 << " - " << nama3 << endl;

    return 0;
}
