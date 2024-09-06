#include <iostream>

using namespace std;

int main()
{ int n, i, s=0, x;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      s=s+x;
  }
  cout << s;
    return 0;
}
