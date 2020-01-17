#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double a, b, c;
    
    cout << "Введите a" << endl;
    cin >> a;
    cout << "Введите b" << endl;
    cin >> b;
    cout << "Введите с" << endl;
    cin >> c;
    
    if (a == 0) // лин. ур.
    {
        if(b!=0)
            cout << "x= " << -c / b << endl;
        else // b==0
            if(c==0)
                cout << "x - любое число" << endl;
            else // c!=0
                cout << "Решения нет" << endl;
    }
    else //a!=0
    {
        double d = b * b - 4 * a * c;
        
        if (d < 0)
            cout << "Уравнение не имеет вещественных корней";
        else
            if (d == 0)
            {
                double x = b / (2 * a);
                cout << "x= " << x;
            }
            else // d > 0
            {
                double x1 = ((-b) + sqrt(d)) / (2 * a);
                double x2 = ((-b) - sqrt(d)) / (2 * a);
            
                cout << "x1= " <<x1 << endl << "x2= " << x2 << endl;
            }
    }
    cout << endl;
    system("pause");
}


