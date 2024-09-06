#include <iostream>

using namespace std;

int main()
{ int k0=0, k1=0, n, i, p=0, nr=1, j;
  for (i=1; i<=9999; i++)
  {
      n=i;
      p=0;
      nr=1;
      while (nr<=n)
      {
          nr=nr*2;
          p++;
      }
      if (nr>n)
        p=p-1;
      while (p>=0)
      {
          nr=1;
          for (j=1; j<=p; j++)
            nr=nr*2;
          if (nr<=n)
          {
              k1++;
              n=n-nr;
          }
          else
            k0++;
          p--;
      }
      if (k0==k1)
        cout << i << " ";
      k0=0;
      k1=0;
  }
    return 0;
}
