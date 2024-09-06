#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, i, x, k=0, d, ke=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
    {
        cin>>x;
        if (i%2==1)
        {
            for (d=2; d<=sqrt(x); d++)
                if (x%d==0)
            {
                k++;
                if (d*d!=x)
                    k++;
            }
            if (k==0)
                ke++;
            k=0;
        }
    }
    cout << ke;
    return 0;
}
