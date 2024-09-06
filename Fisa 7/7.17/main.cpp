#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, k=0, max=0, x, i, nr, d;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      for (d=1; d<=sqrt(x); d++)
        if (x%d==0)
      {
          k++;
          if (d*d!=x)
            k++;
      }
      if (k>max)
      {
          max=k;
          nr=x;
      }
      k=0;
  }
  cout << nr;
    return 0;
}
