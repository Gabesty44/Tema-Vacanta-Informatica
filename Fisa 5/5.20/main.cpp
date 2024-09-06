#include <iostream>

using namespace std;

int main()
{ int n, c, k, i;
  cout << "n="; cin>>n;
  cout << "k="; cin>>k;
  for (i=0; i<=k; i++)
  {
      c=n%10;
      n=n/10;
  }
  if (n==0)
    {if (c==0)
    cout << "Nu exista";}
  else
    cout << c;
    return 0;
}
