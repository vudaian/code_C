#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
 
int main() {
    float a, b, c, delta, x1, x2;
    cout << "Nhap he so a, b, c: ";
    cin >> a;
    cin >> b;
    cin >> c;
    if(a == 0) {
        if(b == 0) {
            if (c == 0) cout << "Phuong trinh vo so nghiem";
            else cout << "Phuong trinh vo nghiem";
        } else cout << "Phuong trinh co nghiem duy nhat: " << -c/b;
        
    } else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b + sqrt(delta))/(2 * a);
            x2 = (-b - sqrt(delta))/(2 * a);
            cout << "Nghiem thu nhat x1 = " << x1;
            cout << "Nghiem thu hai x2 = " << x2;
        } else if ( delta == 0) cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b/2*a;
        else cout << "Phuong trinh vo nghiem";
    }
    return 0;
}