#include <iostream>

using namespace std;

int main()
{ int n, i, s=0, p=1;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      s=s+i;
      p=p*i;
  }
  cout << s << " " << p;
    return 0;
}
