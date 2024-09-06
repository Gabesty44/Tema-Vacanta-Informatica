#include <iostream>

using namespace std;

int main()
{ int n, i, s=0;
  cout << "n="; cin>>n;
  for (i=2; i<=n; i++)
    {s=s+i;
    i++;}
  cout << s;
    return 0;
}
