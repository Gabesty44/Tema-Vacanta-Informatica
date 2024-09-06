#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, i;
  float t, e=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      t=1/(i*i);
      e=e+t;
  }
  cout << e;
    return 0;
}
