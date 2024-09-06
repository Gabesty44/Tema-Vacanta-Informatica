#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, c, d, k=0;
  cout << "n="; cin>>n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      for (d=2; d<=sqrt(c); d++)
        if (c%d==0)
      {
          k++;
          if (d*d!=c)
            k++;
      }
      if (k==0&&c!=1)
        cout << c << " ";
      k=0;
  }
    return 0;
}
