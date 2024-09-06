#include <iostream>

using namespace std;

int main()
{ int n, i, p=1;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
    p=p*i;
  cout << p;
    return 0;
}
