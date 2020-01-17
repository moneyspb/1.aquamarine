//
//  main.cpp
//  8 задача
//
//  Created by Игорь Соколов on 03.12.2019.
//  Copyright © 2019 Игорь Соколов. All rights reserved.
//

#include <iostream>
#include "clocale"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c;
    char op;
    
    
    while (true) {
        cout << "Что нужно посчитать (Ctrl+D - Выход)? ";
        cin >> a >> op >> b;
        
        if (!cin)
        {
            cout << endl;
            return 0;
        }
        
        switch (op)
        {
            case'+':
                c = a + b;
                break;
            
            case'-':
                c = a - b;
                break;
            
            case'*':
                c = a * b;
                break;
           
            case'/':
                if (b == 0)
                {
                    cout << "Error" << endl;
                    system("pause");
                    return 1;
                }
                else
                {
                    c = a / b;
                }
                break;
            
            default:
                cout << "не распознан символ операции " << op << endl;
                system("pause");
                return 2;
        }
    
        cout << a << op << b << " = " << c << endl;
        //cout << "Для повтора нажмите 0" << endl;

    }
    
    return 0;
}

