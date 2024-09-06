#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, c, k=0, v=0, max=0, min, d;
  cout << "n="; cin>>n;
  min=n;
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
      if (k==0&&c>1)
      {
          v=1;
          if (c>max)
            max=c;
          if (c<min)
            min=c;
      }
      k=0;
  }
  if (v==1)
    cout << min << " " << max;
  else
    cout << "Nu exista";
    return 0;
}
