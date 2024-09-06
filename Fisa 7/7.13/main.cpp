#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, x, d=2, dd, v=0, i, k=0, s=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      while (v==0)
        if (x%d==0)
      {
          for (dd=2; dd<=sqrt(d); dd++)
            if (d%dd==0)
          {
              k++;
              if (dd*dd!=d)
                k++;
          }
          if (k==0)
          {
              v=1;
              s=s+d;
          }
          else
            d++;
          k=0;
      }
      d=2;
      v=0;
  }
  cout << s;
    return 0;
}
