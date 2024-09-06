#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, x, i, s=0, k=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      if (x%3==0)
      {
          s=s+x;
          k++;
      }
  }
  cout << (float)s/k;
    return 0;
}
