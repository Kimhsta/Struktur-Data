#include <iostream>
#include <conio.h>
using namespace std;

int argc;
char *argv;

int main()
{
    int z = 4, *p;
    p = &z; // penuggasan
    cout << "Nilai z = " << z << endl;
    cout << "Nilai *P = " << *p << endl;
    cout << "Alamatnya = " << p << endl;
    getch();
}