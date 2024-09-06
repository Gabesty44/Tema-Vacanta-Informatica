#include <iostream>

using namespace std;

int main()
{ int n, i, a, b, min=0, max=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>a;
      cin>>b;
      if (a<=min)
        min=a;
      if (b>=max)
        max=b;
  }
  cout << min << " " << max;
    return 0;
}
