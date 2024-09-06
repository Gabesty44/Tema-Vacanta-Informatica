#include <iostream>

using namespace std;

int main()
{ int n, i, p=1;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
{
    if (i%2==1)
        p=p*i;
    else
        n++;
}
cout << p;
    return 0;
}
