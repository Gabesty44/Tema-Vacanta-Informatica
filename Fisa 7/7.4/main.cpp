#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int k=0, s=0, n, i, x;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      if (x%2==0)
      {
          k++;
          s=s+x;
      }
  }
  if (k==0)
    cout << "Nu exista";
  else
    cout << (float)s/k;
    return 0;
}
