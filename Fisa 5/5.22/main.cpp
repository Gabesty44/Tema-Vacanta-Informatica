#include <iostream>

using namespace std;

int main()
{ int n, x, c, uc, i, k=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      uc=x%10;
      while (x!=0)
      {
          c=x%10;
          x=x/10;
      }
      if (c==uc)
        k++;
  }
  cout << k;
    return 0;
}
