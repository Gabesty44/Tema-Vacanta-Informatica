#include <iostream>

using namespace std;

int main()
{ int n, d, s=0;
  cout << "n="; cin>>n;
  for (d=1; d<=n-1; d++)
    if (n%d==0)
        s=s+d;
  if (n==s)
    cout << "Da";
  else
    cout << "Nu";

    return 0;
}
