//
//  main.cpp
//  9 задача програ
//
//  Created by Игорь Соколов on 03.12.2019.
//  Copyright © 2019 Игорь Соколов. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
    
    srand((unsigned int)time(NULL)); // беззнаковое целое
    int a, b;
    int i, n = 5;
    int next = 0 , m=0;
    
    a = rand() % 101;
    //cout << "a = " << a << endl;
    i = 1;
    while(i<=n)
    {
        if(i==1)
            cout<<"Угадай число от 0 до 100\n";
        cout << "Попытка номер " << i << ": ";
        cin >> b;
        
        if (b==a)
        {
            cout <<"Поздравляю! Вы угадали\n";
            m=1;
        }
        
        if (b<a)
            cout <<"Загаданное число больше\n";
       
        if(b>a)
            cout<<"Загаданное число меньше\n";
       
        i++;
        
        if (i==n && m==0)
            cout << "Вы проиграли. Было загадано - " << a << endl;
        
        if (i == n || m == 1)
        {
            cout<<"Хотите начать с начала? Если да - 1\n";
            cin >> next;
        }
        
        if (next == 1)
        {
            m = 0;
            i = 1;
            a = rand() % 101;
            //cout << "a = " << a << endl;
            next = 0;
        }
    }
    return 0;
}
