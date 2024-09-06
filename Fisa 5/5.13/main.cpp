#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, i, x, si=0, sp=0, ki=0, kp=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
    {
        cin>>x;
        if (x%2==0)
        {
            sp=sp+x;
            kp++;
        }
        else
        {
            si=si+x;
            ki++;
        }
    }
  cout << (float)sp/kp<< " " << (float)si/ki;
    return 0;
}
