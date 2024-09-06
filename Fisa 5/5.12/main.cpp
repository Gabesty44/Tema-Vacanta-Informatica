#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, p=1, s=0, i, x;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      if (x%2==0)
        s=s+x;
      p=p*x;
  }
  cout << (float)p/s;
    return 0;
}
