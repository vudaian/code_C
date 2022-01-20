#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float a, b;
    cout << "Nhap he so a, b: ";
    cin >> a;
    cin >> b;
    if (a == 0) {
        if (b == 0) cout << "Phuong trinh co vo so nghiem";
        else cout << "Phuong trinh vo nghiem";
    }
    else cout << "Phuong trinh co mot nghiem la x: " << -b / a;
    return 0;
}