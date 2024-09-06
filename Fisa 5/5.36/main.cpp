#include <iostream>

using namespace std;

int main()
{ int a, b, r;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  while (b!=0)
  {
      r=a%b;
      a=b;
      b=r;
  }
  if (a==1)
    cout << "Da";
  else
    cout << "Nu";
    return 0;
}
