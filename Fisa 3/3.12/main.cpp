#include <iostream>

using namespace std;

int main()
{ int a, b, c, auxa;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  cout << "c="; cin>>c;
  auxa=a;
  a=b;
  b=c;
  c=auxa;
  cout << a << " " << b << " " << c;
    return 0;
}
