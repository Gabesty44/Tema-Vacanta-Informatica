#include <iostream>

using namespace std;

int main()
{ int x, y, z;
  cout << "x="; cin>>x;
  cout << "y="; cin>>y;
  cout << "z="; cin>>z;
  if (x>0&&y>0&&z>0)
    if (y>z)
    cout << y;
    else
        cout << z;
  else
    cout << x+y;
    return 0;
}
