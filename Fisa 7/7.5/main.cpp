#include <iostream>

using namespace std;

int main()
{ int n, i;
  cout << "n="; cin>>n;
  if (n%2==0)
    for (i=n; i>=0; i--)
  {
      cout << i << " ";
      i=i-1;
  }
  if (n%2==1)
    for (i=n-1; i>=0; i--)
  {
      cout << i << " ";
      i=i-1;
  }
    return 0;
}
