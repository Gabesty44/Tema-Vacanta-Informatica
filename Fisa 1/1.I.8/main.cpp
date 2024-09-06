#include <iostream>

using namespace std;

int main()
{ int n, pal=0, c;
  cout << "n="; cin>>n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      pal=pal*10+c;
  }
  cout << pal;
    return 0;
}
