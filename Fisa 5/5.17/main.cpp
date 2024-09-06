#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, c, pp=1, si=0;
  cout << "n="; cin>>n;
    while (n!=0)
      c=n%10;
      n=n/10;
      pp=pp*c;
      if (n!=0)
      {
          c=n%10;
          n=n/10;
          si=si+c;
      }
  cout << (float)pp/si;
    return 0;
}
