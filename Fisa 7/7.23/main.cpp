#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, i, x, d, k=0, nr, min=999999;
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
      if (k<=min)
      {
          min=k;
          nr=x;
      }
      k=0;
  }
  cout << nr;
    return 0;
}
