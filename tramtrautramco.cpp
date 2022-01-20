#include <iostream>
using namespace std;
int main () {
    int dem = 0;
    for (int a = 1 ; a <= 20 ; a++)
        for (int b = 1 ; b <= 33 ; b++)
            if ( a * 5 + b * 3 + (100 - a - b)/3 == 100) {
                cout << "Trau dung la: " << a << "\n";
                cout << "Trau nam la: " << b << "\n";
                cout << "Trau gia la: " << 100-a-b << "\n\n";
                dem ++;
            }
    cout << "Co tat ca cac cach la: " << dem;
    return 0;
}