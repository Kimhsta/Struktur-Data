#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int *data = new int;
    *data = 100;

    cout << "Nilai int data :" << *data;
    cout << ", pada lokasi memori :" << data;
    cout << endl;
    cout << "Dengan ukuran data :" << sizeof(data) << " Byte";
    getch();
}
