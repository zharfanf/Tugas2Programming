#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){
    int pilihan;
    cout << "Main Menu :";
    cout << "1. Kalkulator           2. Turunan Polinomial";
    cin >> pilihan;
    if (pilihan == 1)
    {
        int x;
        int y;
        char simbol;
        cout << "Masukkan nilai x : " ;
        cin >> x;
        cout << "Masukkan nilai y : " ;
        cin >> y;
        cout << "Masukkan operator :" ;
        cin >> simbol;
        if (simbol == '+')
        {
            cout << x + y;
        }
        else if (simbol == '-'){
            cout << x - y;
        }
        else if (simbol == '*')
        {
            cout << x * y;
        }
        else if (simbol == '/'){
            cout << x / y;
        }
    }
    else if (pilihan == 2)
    {
        int derajat;
        int j;
        int i;
        char m[100];
        int a[100];
        cout << "Masukan Derajatnya : ";
        cin >> derajat;
        for (j = derajat; j > -1; j = j - 1)
        {
            cout << "Input Operasi " << j << ":";
            cin >> m[j];
            cout << "Input Konstanta " << j << ":";
            cin >> a[j];
            cout<<endl;
        }
        for (j = derajat; j > -1; j = j - 1)
        {
            cout << m[j];
            cout << a[j];
            cout << endl << endl;
        }
        cout << "Polinomial Anda Adalah : ";
        for (j = derajat; j > -1; j = j - 1)
        {
            cout << m[j]  << a[j] << "x^" << j;
        }
        cout << endl;
        cout << endl;
        cout << "Turunannya adalah : ";
        for (j = derajat; j > 0; j = j - 1)
        {
            cout << m[j]  << a[j] * j << "x^" << j-1;
        }
    }
    
}