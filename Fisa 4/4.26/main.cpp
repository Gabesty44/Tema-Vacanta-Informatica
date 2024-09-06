#include <iostream>

using namespace std;

int main()
{ int a, b, pal=0, c;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  while (a!=0)
  {
      c=a%10;
      a=a/10;
      pal=pal*10+c;
  }
  if (pal==b)
    cout << "Da";
  else
    cout << "Nu";
    return 0;
}
