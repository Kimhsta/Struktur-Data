#include <iostream>
#include <stdlib.h>
using namespace std;

int nilai[100];
int i, j, jdata;

void isidata()
{
    char tanya;
    i = 0;
    jdata = 0;
    tanya = 'Y';
    while (tanya == 'Y' || tanya == 'y')
    {
        system("cls");
        cout << "Data ke            : " << i + 1 << endl;
        cout << "Nilai Mahasiswa    : ";
        cin >> nilai[i];
        cout << endl;
        i = i + 1;
        cout << "Masih ada Data lagi? (Y/T) : ";
        cin >> tanya;
    }
    jdata = i;
}

void tukar(int a, int b)
{
    int temp;
    temp = nilai[b];
    nilai[b] = nilai[a];
    nilai[a] = temp;
}

void selection_sort()
{
    int i, j, minIndex;
    for (i = 0; i < jdata - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < jdata; j++)
        {
            if (nilai[j] < nilai[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            tukar(i, minIndex);
        }
    }
}

void tampil()
{
    for (i = 0; i < jdata; i++)
    {
        cout << "Nilai ke " << i + 1 << " : " << nilai[i];
        cout << endl;
    }
}

int main()
{
    isidata();
    system("cls");
    cout << "Data sebelumnya diurutkan ";
    cout << endl;
    tampil();
    selection_sort();
    cout << endl;
    cout << "Data sesudah diurutkan";
    cout << endl;
    tampil();
    return 0;
}
