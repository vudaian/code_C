#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap diem: ";
    cin >> n;
    if(n >= 0 && n <= 3) cout << "Ket qua kem.";
    else if(n == 4) cout << "Ket qua yeu";
    else if(n == 5 || n == 6) cout << "Ket qua trung binh.";
    else if(n == 7 || n == 8) cout << "Ket qua kha.";
    else if(n == 9 || n == 10) cout << "Ket qua la gioi";
    else cout << "Khong phai la diem so.";
    
}