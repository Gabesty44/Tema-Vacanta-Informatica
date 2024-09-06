#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int x, y;
  cout << "x="; cin>>x;
  y=sqrt(x);
  if (y*y==x)
    cout << "Da";
  else
    cout << "Nu";
    return 0;
}
