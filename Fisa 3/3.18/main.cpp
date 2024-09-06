#include <iostream>

using namespace std;

int main()
{ int n, c, s=0;
  cout << "n="; cin>>n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      s=s+(c*c*c);
  }
  cout << s;
    return 0;
}
