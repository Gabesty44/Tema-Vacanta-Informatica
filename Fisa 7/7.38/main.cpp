#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, i, t1, t2, d, k=0, v=1;
  cout << "n="; cin>>n;
  for (i=2; i<=n-2; i++)
  {
      t1=i;
      t2=n-t1;
      for (d=2; d<=sqrt(t1); d++)
        if (t1%d==0)
        {
            k++;
            if (d*d!=t1)
                k++;
        }
      if (k!=0)
        v=0;
      k=0;
      for (d=2; d<=sqrt(t2); d++)
        if (t2%d==0)
      {
          k++;
          if (d*d!=t2)
            k++;
      }
      if (k!=0)
        v=0;
      if (v==1)
        cout << t1 << "+" << t2 << " ";
      v=1;
      k=0;
  }
    return 0;
}
