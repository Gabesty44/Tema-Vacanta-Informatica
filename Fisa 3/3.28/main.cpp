#include <iostream>

using namespace std;

int main()
{ int a, b, c;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  cout << "c="; cin>>c;
  a=a/100;
  b=(b/10)%10;
  c=c%10;
  cout << 100*a+10*b+c;
    return 0;
}
