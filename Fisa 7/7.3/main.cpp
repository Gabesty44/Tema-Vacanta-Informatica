#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int x, d, k=0;
  cout << "x="; cin>>x;
  for (d=2; d<=sqrt(x); d++)
    if (x%d==0)
  {
      k++;
      if (d*d!=x)
        k++;
  }
  if (k==0)
    cout << "Este numar prim";
  else
    cout << "Nu este numar prim";
    return 0;
}
