#include <iostream>

using namespace std;

int main()
{ int x, c, uc, s;
  cout << "x="; cin>>x;
  uc=x%10;
  c=(x/10)%10;
  if (uc>=c)
    cout << uc << " ";
  else
    cout << c << " ";
  cout << uc+c;
    return 0;
}
