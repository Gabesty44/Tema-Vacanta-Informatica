#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, i, x, k=0, r;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      r=sqrt(x);
      if (r*r==x)
        k++;
  }
  cout << k;
    return 0;
}
