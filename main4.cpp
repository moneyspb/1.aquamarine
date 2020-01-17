
#include <iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
    
cin >> a >> b;
c = a;
a = b;
b = c;
cout << "\n" << a << "\t" << b << "\n";
cin >> a>> b;
a = a + b;
b = a - b;
a = a - b;
cout << "\n" << a << "\n" << b;
    
    return 0;
}
