#include <iostream>

using namespace std;

int main()
{ int x, y, z, max;
  cout << "x="; cin>>x;
  cout << "y="; cin>>y;
  cout << "z="; cin>>z;
  if (x>=y)
    max=x;
  else
    max=y;
  if (z>=max)
    max=z;
  cout << max;
    return 0;
}
