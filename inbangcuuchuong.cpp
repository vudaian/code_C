#include <iostream> 
using namespace std; 
int main() { 
    int i,j; 
        for(i=2;i<10;i++) { 
            cout << "\n" << "Bang nhan " << i << "\n";
            for(j=1;j<10;j++) 
                cout << j << " * " << i << " = " << j*i <<"\t"; 
        } 
    return 0; 
}