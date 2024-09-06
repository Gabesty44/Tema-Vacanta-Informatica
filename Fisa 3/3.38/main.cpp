#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, c, s=0;
  float ma;
  cout << "n="; cin>>n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      s=s+c;
  }
  ma=s/5;
  cout << ma;
    return 0;
}
