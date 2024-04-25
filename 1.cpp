#include <iostream>

using namespace std;

int main()
{
    int angka, hasil=1;
    cin >> angka;

    for(int i = 1; i <= angka; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << hasil << " ";
            hasil++;
        }        
        cout << endl;
    }

    return 0;
}