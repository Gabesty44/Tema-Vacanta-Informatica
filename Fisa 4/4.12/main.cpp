#include <iostream>

using namespace std;

int main()
{ int x, y, z;
  cin>>x;
  cin>>y;
  cin>>z;
  if (x==y+z)
    cout << x;
  else if (y==x+z)
  cout << y;
  else if (z==x+y)
    cout << z;
  else
    cout << "Nu exista";

    return 0;
}
