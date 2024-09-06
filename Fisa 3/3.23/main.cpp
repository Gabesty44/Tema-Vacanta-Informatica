#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, s=0, c;
  float ma;
  cout << "n="; cin>>n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      s=s+c;
  }
  ma=s/7;
  cout << ma;
    return 0;
}
