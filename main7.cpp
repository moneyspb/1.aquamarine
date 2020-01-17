#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int x1, x2, x3, y1, y2, y3;
    double AB, BC, AC, S, a, b, c, p;
    int L;

    cout << "Выберите вариант (1 или 2): " << endl;
    cin >> L;

    if(L!=1 && L!=2)
    {
        cout<<"Вариант должен быть 1 или 2"<< endl;
        return 0;
    }
    
    if (L == 1)
    {
        cout << "Введите длинны 3-х сторон: " << endl;
        cin >> a >> b >> c;
        
        a=fabs(a);
        b=fabs(b);
        c=fabs(c);
    }
    else // L==2
    {
        cout << "Укажите координаты вершины А: ";
        cin >> x1 >> y1;
        
        cout << "Укажите координаты вершины В: ";
        cin >> x2 >> y2;
      
        cout << "Укажите координаты вершины С: ";
        cin >> x3 >> y3;
        
        AB = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        c = sqrt(AB);
        BC = ((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        a = sqrt(BC);
        AC = ((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
        b = sqrt(AC);
    }
    
    if ((a+b>=c) && (b+c>=a) && (a+c>=b))
    {
        p = (a + b + c) / 2;
        S = (p * (p - a) * (p - b) * (p - c));
        S = sqrt(S);
        cout<< "Площадь треугольника = " << S <<endl;
    }
    else
        cout<<"Треугольник не существует"<< endl;
    
    cout << endl;
    system("pause");
}


