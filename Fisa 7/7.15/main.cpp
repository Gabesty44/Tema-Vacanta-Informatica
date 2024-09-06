#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, x, d, pal=0, k=0, v=0, aux, i, c;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      aux=x;
      while (x!=0)
      {
          c=x%10;
          x=x/10;
          pal=pal*10+c;
      }
      if (aux==pal)
      {
          for (d=2; d<=sqrt(aux); d++)
            if (aux%d==0)
          {
              k++;
              if (d*d!=aux)
                k++;
          }
          if (k==0)
            v=1;
      }
      k=0;
  }
  if (v==1)
    cout << "Da";
  else
    cout << "Nu";
    return 0;
}
