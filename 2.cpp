#include <iostream>

using namespace std;

int main()
{
    int angka = 0, tambah, hasil = 0;
    cin >> angka;

    while(angka>0)
    {
        tambah = angka % 10;
        hasil += tambah;
        angka /= 10;
    }

    cout << hasil;


    return 0;
}