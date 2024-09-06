#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, k=0, d;
  cout << "n="; cin>>n;
  for (d=1; d<=sqrt(n); d++)
      if (n%d==0)
      {
          k++;
          if (d*d!=n)
            k++;
      }
  cout << k;
    return 0;
}
