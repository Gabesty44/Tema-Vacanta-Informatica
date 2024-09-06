#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, i, x, s=0, c, k=0, d, ke=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      while (x!=0)
      {
          c=x%10;
          x=x/10;
          s=s+c;
      }
      for (d=2; d<=sqrt(s); d++)
        if (s%d==0)
      {
          k++;
          if (d*d!=s)
            k++;
      }
      if (k==0)
        ke++;
      k=0;
      s=0;
  }
  cout << ke;
    return 0;
}
