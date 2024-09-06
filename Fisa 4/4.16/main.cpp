#include <iostream>

using namespace std;

int main()
{ int n, i, c, max=0;
  cout << "n="; cin>>n;
  for (i=1; i<=2; i++)
  {
      c=n%10;
      n=n/10;
      if (c>max)
        max=c;
  }
  cout << max;
    return 0;
}
