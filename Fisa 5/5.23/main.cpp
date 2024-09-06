#include <iostream>

using namespace std;

int main()
{ int n, i, x, min=99999999, max=-9999999;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      if (x<min)
        min=x;
      if (x>max)
        max=x;
  }
  cout << min << " " << max;
    return 0;
}
