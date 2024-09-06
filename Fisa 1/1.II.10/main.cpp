#include <iostream>

using namespace std;

int main()
{ int n, c1, c2;
  cout << "n="; cin>>n;
  n=n/100;
  c2=n%10;
  c1=(n/10)%10;
  if (c1>=c2)
    cout << c2 << " " << c1;
  else
    cout << c1 << " " << c2;
    return 0;
}
