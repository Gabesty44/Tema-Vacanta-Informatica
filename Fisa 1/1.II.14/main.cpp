#include <iostream>

using namespace std;

int main()
{ int x, y, z;
  cout << "x="; cin>>x;
  cout << "y="; cin>>y;
  cout << "z="; cin>>z;
  if ((y-x==1)&&(z-y==1))
    cout << "Da";
  else
    cout << "Nu";
    return 0;
}
