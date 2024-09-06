#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, i, d, k=0;
  cout << "n="; cin>>n;
  for (i=2; i<=n+1; i++)
  {
      for (d=2; d<=sqrt(i); d++)
        if (i%d==0)
      {
          k++;
          if (d*d!=i)
            k++;
      }
      if (k==0)
        cout << i << " ";
      else
        n=n+i;
      k=0;
  }
    return 0;
}
