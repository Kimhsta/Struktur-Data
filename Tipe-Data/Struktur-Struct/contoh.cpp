#include <iostream>
using namespace std;

struct mahasiswa
{
    char nama[20];
    char alamat[20];
    double IPK;
};

int main()
{
    mahasiswa elektro =
        {
            "Nadila",
            "Mataram",
            3.89};

    mahasiswa mesin =
        {
            "Lilis",
            "Kuno",
            3.79};

    cout << "Nama       : " << elektro.nama << endl;
    cout << "Alamat     : " << elektro.alamat << endl;
    cout << "IPK        : " << elektro.IPK << endl;
    cout << endl;
    cout << "Nama       : " << elektro.nama << endl;
    cout << "Alamat     : " << elektro.alamat << endl;
    cout << "IPK        : " << elektro.IPK << endl;
}