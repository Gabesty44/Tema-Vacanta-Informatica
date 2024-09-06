#include <iostream>

using namespace std;

int main()
{ int n, p, r, i, x, k=0;
  cout << "n="; cin>>n;
  cout << "p="; cin>>p;
  cout << "r="; cin>>r;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      if (x%p==r)
        k++;
  }
  cout << k;
    return 0;
}
