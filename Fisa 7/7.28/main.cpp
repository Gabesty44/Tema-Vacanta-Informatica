#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, x, c, d, k=0, i, ke=0, v;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      v=1;
      while (x!=0)
      {
          c=x%10;
          x=x/10;
          for (d=2; d<=sqrt(c); d++)
            if (c%d==0)
          {
              k++;
              if (d*d!=c)
                k++;
          }
          if (k!=0)
            v=0;
          k=0;
      }
      if (v==1)
        ke++;
      v=1;
  }
  cout << ke;
    return 0;
}
