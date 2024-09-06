#include <iostream>

using namespace std;

int main()
{ int a, b, c;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  cout << "c="; cin>>c;
  if (a!=b)
    cout << a+b << endl;
  if (b!=c&&a!=c)
    cout << b+c << endl;
  if (a!=c&&a!=b)
    cout << a+c << endl;
    return 0;
}
