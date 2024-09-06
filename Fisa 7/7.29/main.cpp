#include <iostream>

using namespace std;

int main()
{ int n, x, i, s=0, c, k=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      while (x!=0)
      {
          c=x%10;
          x=x/10;
          s=s+c;
      }
      if (s==i)
        k++;
      s=0;
  }
  cout << k;
    return 0;
}
