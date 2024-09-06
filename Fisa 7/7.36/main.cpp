#include <iostream>

using namespace std;

int main()
{ int n, k1=0, x, i, j, p=0, k0=0, nr=1, max=-1, e, aux;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      aux=x;
      p=0;
      nr=1;
      while (nr<=x)
      {
          nr=nr*2;
          p++;
      }
      if (nr>x)
        p=p-1;
      while (p>=0)
      {
          nr=1;
          for (j=1; j<=p; j++)
            nr=nr*2;
          if (nr<=x)
          {
              k1++;
              x=x-nr;
          }
          else
            k0++;
          p--;
      }
      if (k1>max)
        {e=aux;
         max=k1;}
      k1=0;
      k0=0;
  }
  cout << e;
    return 0;
}
