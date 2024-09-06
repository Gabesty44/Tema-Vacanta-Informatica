#include <iostream>

using namespace std;

int main()
{ int a, b, auxa;
  cout << "a="; cin>>a;
  auxa=a;
  cout << "b="; cin>>b;
  a=b;
  b=auxa;
  cout << a << " " << b;
    return 0;
}
