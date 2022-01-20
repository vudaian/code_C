#include <iostream>
using namespace std;
int main() {
    int n, socach = 0, si, sj, i, j, k;
    cout << "Nhap menh gia tien: ";
    cin >> n;
    int dem = 0;
    for (i = n / 5000; i >= 0; i--) {
        si = n - i * 5000;
        for (j = si / 10000; j >= 0; j--) {
                sj = si - j * 10000;
                for (k = sj / 20000; k >= 0; k--) {
                    if (i * 5000 + j * 10000 + k * 20000 == n) {
                        cout << "Co " << i << " dong 5000, " << j << " dong 10000, " << k << " dong 20000." << endl;
                        dem ++;
                    } 
                }
            }
    }
    cout << "Tong cac phuong an: " << dem;
    return 0;
}