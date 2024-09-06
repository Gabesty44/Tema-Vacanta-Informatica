#include <iostream>

using namespace std;

int main()
{ int n, c, k=0;
  cout << "n="; cin>>n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      if (c%2==1)
        k++;
  }
  cout << k;
    return 0;
}
