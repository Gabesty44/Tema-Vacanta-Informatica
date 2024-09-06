#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, v=0, k=0, max=0, x, i, d, kd=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      for (d=2; d<=sqrt(x); d++)
        if (x%d==0)
      {
          kd++;
          if (d*d!=x)
            kd++;
      }
      if (kd==0)
      {
          v=1;
          if (x>max)
            {max=x;
             k=1;}
          else if (x==max)
            k++;
      }
      kd=0;
  }
  if (v==1)
    cout << k;
  else
    cout << "Nu exista";
    return 0;
}
