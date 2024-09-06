#include <iostream>

using namespace std;

int main()
{ int a, b, c, nr=0;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  cout << "c="; cin>>c;
  a=a/100;
  b=(b/10)%10;
  c=c%10;
  nr=(100*a)+(10*b)+c;
  cout << nr;
    return 0;
}
