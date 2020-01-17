#include <iostream>

using namespace std;
int main()
{
    int i, a;
    bool z;
    
    cout << "Ввести целое положительное число: ";
    cin >> a;
    
    z = true; // предпологаю что число простое
    for (i = 2; i < a; i++) {
        if (a % i == 0) {
            z = false;
        }
    }
    
    if (z == true){
        cout << a << " - простое" << endl;
    }
    else {
         cout << a << " - Состовное" << endl;
    }
    
    return 0;
}


