#include <iostream>

using namespace std;

int main()
{ int n, pal=0, nr=0, c, i;
  cout << "n="; cin>>n;
  for (i=1; i<=2; i++)
  {
      c=n%10;
      n=n/10;
      pal=pal*10+c;
  }
  n=n/10;
  for (i=1; i<=2; i++)
  {
      c=n%10;
      n=n/10;
      pal=pal*10+c;
  }
  while (pal!=0)
  {
      c=pal%10;
      pal=pal/10;
      nr=nr*10+c;
  }
  cout << nr;
    return 0;
}
