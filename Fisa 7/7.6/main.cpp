#include <iostream>

using namespace std;

int main()
{ int n, i, d, s=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n-1; i++)
  {for (d=1; d<=i-1; d++)
    if (i%d==0)
    s=s+d;
   if (i==s)
    cout << i << " ";
   s=0;}
    return 0;
}
