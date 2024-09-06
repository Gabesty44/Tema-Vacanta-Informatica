#include <iostream>

using namespace std;

int main()
{ int x, y, i;
  cout << "x="; cin>>x;
  cout << "y="; cin>>y;
  for (i=1; i<=2; i++)
    {x=x/10;
     y=y/10;}
  cout << (10*x)+y;
    return 0;
}
