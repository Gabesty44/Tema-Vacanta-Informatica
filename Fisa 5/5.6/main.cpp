#include <iostream>

using namespace std;

int main()
{ int n, i, s=0;
  cout << "n="; cin>>n;
  for (i=3; i<=n; i++)
  {
      s=s+i;
      i=i+2;
  }
  cout << s;
    return 0;
}
