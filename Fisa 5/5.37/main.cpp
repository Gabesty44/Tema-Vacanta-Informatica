#include <iostream>

using namespace std;

int main()
{ int x, y, auxx, auxy, r;
  cout << "x="; cin>>x;
  cout << "y="; cin>>y;
  auxx=x;
  auxy=y;
  while (y!=0)
  {
      r=x%y;
      x=y;
      y=r;
  }
  cout << auxx/x << " " << auxy/x;
    return 0;
}
