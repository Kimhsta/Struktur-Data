#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int data[10];
    int jum;
    cout << "Masukkan jumlah Array :";
    cin >> jum;
    cout << endl;
    cout << "Masukkan nilai array yang diinginkan :" << endl;
    for (int i = 0; i < jum; i++)
    {
        cout << "Nilai array ke " << (i + 1) << ":";
        cin >> data[i];
    }
    cout << endl;
    cout << "Nilai yang telah diinputkan :" << endl;
    for (int i = 0; i < jum; i++)
    {
        cout << "Nilai array ke " << (i + 1) << " adalah :" << data[i] << endl;
    }
    getch();
}
