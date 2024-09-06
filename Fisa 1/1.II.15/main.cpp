#include <iostream>

using namespace std;

int main()
{ int x;
  cout << "x="; cin>>x;
  if (x<=-3)
    cout << (x*x)+1;
  else if (x<3)
    cout << x-2;
  else
    cout << x*x-4*x+5;
    return 0;
}
