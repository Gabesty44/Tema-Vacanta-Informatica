#include <iostream>

using namespace std;

int main()
{ int n, k3=0, sp=0, k0=0, c;
  cout << "n="; cin>>n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      if (c%3==0)
        k3++;
      if (c%2==0)
        sp=sp+c;
      if (c==0)
        k0++;
  }
  cout << k3 << " " << sp << " " << k0;
    return 0;
}
