#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, x, p;
    
    cout << "Укажите неотрицательное целое число: ";
    cin >> n;
    
    x = 1;
    p = 1;
    for ( ; p <= n; x++) {
        p = p*2;
    }
    x--;
    
    cout << "n = " << n << endl;
    cout << "x = " << x << endl;

    return 0;
}
