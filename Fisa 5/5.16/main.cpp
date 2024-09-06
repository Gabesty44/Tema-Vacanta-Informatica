#include <iostream>

using namespace std;

int main()
{ int n, aux, c, p=1;
  cout << "n="; cin>>n;
  aux=n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      if (c!=0)
      p=p*c;
  }
  cout << aux%p << " " << aux/p;
    return 0;
}
