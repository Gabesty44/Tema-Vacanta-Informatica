#include <iostream>

using namespace std;

int main()
{ int n, x, max=0, min=999999, i;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      if (x<min)
        min=x;
      if (x>max)
        max=x;
  }
  cout << max << " " << min;
    return 0;
}
