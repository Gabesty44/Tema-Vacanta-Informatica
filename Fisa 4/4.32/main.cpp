#include <iostream>

using namespace std;

int main()
{ int a, b, c;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  cout << "c="; cin>>c;
  if (c-b==b-a)
     {cout << a << "+" << b << "=" << a+b << endl;
      cout << a << "+" << c << "=" << a+c << endl;
      cout << b << "+" << c << "=" << b+c;}

    return 0;
}
