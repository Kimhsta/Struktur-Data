#include <iostream>
using namespace std;

union total
{
    int nilai_awal;
    int nilai_tengah;
    int nilai_akhir;
};

int main()
{
    total angka;
    cout << "Nilai Awal     : ";
    cin >> angka.nilai_awal;
    cout << "Nilai Tengah   : ";
    cin >> angka.nilai_tengah;
    cout << "Nilai Akhir    : ";
    cin >> angka.nilai_akhir;
    cout << endl;
    cout << "Nilai Awal     : " << angka.nilai_awal << endl;
    cout << "Nilai Tengah   : " << angka.nilai_tengah << endl;
    cout << "Nilai Akhir    : " << angka.nilai_akhir << endl;
}