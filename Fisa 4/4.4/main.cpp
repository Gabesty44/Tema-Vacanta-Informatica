#include <iostream>

using namespace std;

int main()
{ int a, b;
cout << "a="; cin>>a;
cout << "b="; cin>>b;
if (a>b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
cout << a << " " << b;
    return 0;
}
