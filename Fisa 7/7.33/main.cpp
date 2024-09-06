#include <iostream>

using namespace std;

int main()
{ int n, d;
  cout << "n="; cin>>n;
  for (d=1; d<=n; d++)
    if (n%d==0)
    cout << d << " ";
  cout << endl;
  for (d=n; d>=1; d--)
    if (n%d==0)
    cout << d << " ";
    return 0;
}
