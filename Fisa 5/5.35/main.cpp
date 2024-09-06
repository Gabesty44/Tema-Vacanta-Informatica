#include <iostream>

using namespace std;

int main()
{ int a, b, p, r;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  p=a*b;
  while (b!=0)
  {
      r=a%b;
      a=b;
      b=r;
  }
  cout << p/a;
    return 0;
}
