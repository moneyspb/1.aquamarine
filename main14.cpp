//
//  main.cpp
//  14 prog
//
//  Created by Игорь Соколов on 16.12.2019.
//  Copyright © 2019 Игорь Соколов. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int S, l1, r1, l2, r2, x1, x2;
    
    cout << "Укажите числа для S, l1, r1, l2, r2: ";
    cin >> S >> l1 >> r1 >> l2 >> r2;
    
    if (S >= l1 + l2 && S <= r1 + r2) {
        x1=l1;
        x2=S-x1;
    
        cout << "Решение есть: " << x1 << " " << x2 << endl;
    }
    else {
        cout << "-1" << endl;
        
    }
    
    
    return 0;
}
