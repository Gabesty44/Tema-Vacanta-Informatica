#include <iostream>

using namespace std;

int main()
{ int n, x, y;
  cout << "n="; cin>>n;
  if (n==0)
  {
      cout << "a="; cin>>x;
      cout << "b="; cin>>y;
      cout << x+y;
  }
  else
  {
      cout << "x="; cin>>x;
      cout << "y="; cin>>y;
      cout << x*y;
  }
    return 0;
}
