//
//  main.cpp
//  5
//
//  Created by Игорь Соколов on 16.01.2020.
//  Copyright © 2020 Игорь Соколов. All rights reserved.
//

#include <iostream>
#include "clocale"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double x, x0, v0, t;
    double a = -9.8;
    cout << "Введите переменную x0" << endl;
    cin >> x0;
    cout << "Введите переменую V0" << endl;
    cin >> v0;
    cout << "Введите переменную t0" << endl;
    cin >> t;
     x = x0 + v0 * t + a * t * t / 2 ;
    cout << "x =" << x0 + v0 * t + a * t * t / 2 << "\n";
     cout << "x2 =" << x0 + v0 * t + 1/2 * a * t * t << "\n";
    
 
    return 0;
}
