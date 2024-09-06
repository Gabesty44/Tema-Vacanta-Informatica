#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, x, pal=0, nr=0, c, i, d, k=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      c=x%10;
      pal=pal*10+c;
  }
  while (pal!=0)
  {
      c=pal%10;
      pal=pal/10;
      nr=nr*10+c;
  }
  for (d=2; d<=sqrt(nr); d++)
  {
      if (nr%d==0)
      {
          k++;
          if (d*d!=nr)
            k++;
      }
  }
  if (k==0)
    cout << "Numarul este prim";
  else
    cout << "Numarul nu este prim";
      return 0;
}
