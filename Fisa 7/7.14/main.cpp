#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, i;
  cout << "n="; cin>>n;
  for (i=1; i<=sqrt(n); i++)
    if (i*i<n)
    cout << i*i << " ";
    return 0;
}
