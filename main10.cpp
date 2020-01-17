//
//  main.cpp
//  10 progrm
//
//  Created by Игорь Соколов on 09.12.2019.
//  Copyright © 2019 Игорь Соколов. All rights reserved.
//
#include <iostream>
using namespace std;
int main() {
    double a, R, P;
    int b;
    
    cout<<"Укажите основание и показатель степени: ";
    cin >> a >> b;
    
    R = 1;      // предполагаю что b == 0
    P = 1;
    for (int i = 1; i <= abs(b); i++) {
        P = P * a;
    }
    
    if (b >= 1) {
        R = P;
    }
    
    if (b <= -1) {
        R = 1.0/P;
    }
    
    cout << "Результат: " << R << endl;

    return 0;
}
