#include <iostream>

using namespace std;

int main()
{ int a, b, c, d;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  cout << "c="; cin>>c;
  cout << "d="; cin>>d;
  if (c+d<0)
    cout << a+b;
  else if (c+d==0)
    cout << a-b;
  else
    cout << a*b;

    return 0;
}
