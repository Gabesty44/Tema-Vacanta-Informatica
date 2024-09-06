#include <iostream>

using namespace std;

int main()
{ int x, y, z, i, c;
  cout << "x="; cin>>x;
  cout << "y="; cin>>y;
  cout << "z="; cin>>z;
  for (i=1; i<=3; i++)
  {
      c=x%10;
      x=x/10;
      cout << c << " ";
  }
  for (i=1; i<=3; i++)
  {
      c=y%10;
      y=y/10;
      cout << c << " ";
  }
  for (i=1; i<=3; i++)
  {
      c=z%10;
      z=z/10;
      cout << c << " ";
  }
    return 0;
}
