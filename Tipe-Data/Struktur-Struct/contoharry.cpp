#include <iostream>
using namespace std;

struct Pekerjaan
{
    char nama[20];
    char alamat[20];
    char pekerjaan[20];
};

Pekerjaan personData[3];

int main()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama       : ";
        cin >> personData[i].nama;
        cout << "Alamat     : ";
        cin >> personData[i].alamat;
        cout << "Pekerjaan  : ";
        cin >> personData[i].pekerjaan;
        cout << endl;
    }

    for (int j = 0; j < 3; j++)
    {
        cout << "Nama       : " << personData[j].nama << endl;
        cout << "Alamat     : " << personData[j].alamat << endl;
        cout << "Pekerjaan  : " << personData[j].pekerjaan << endl;
        cout << endl;
    }
}