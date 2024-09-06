#include <iostream>

using namespace std;

int main()
{ int n, pal=0, c;
  cout << "nr="; cin>>n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      pal=pal*10+c;
  }
  while (pal!=0)
  {
      c=pal%10;
      pal=pal/10;
      cout << c << "*";
  }
    return 0;
}
