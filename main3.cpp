//
//  main.cpp
//  №3
//
//  Created by Игорь Соколов on 09.12.2019.
//  Copyright © 2019 Игорь Соколов. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    double a, b;
    
    cout << "Укажите 2 целых числа: ";
    cin >> a >> b;
    
    cout << a << "+" << b << " = " << a + b << endl;
    cout << a << "-" << b << " = " << a - b << endl;
    cout << a << "*" << b << " = " << a * b << endl;
    cout << a << "/" << b << " = " << a / b << endl;
    
    return 0;
}
