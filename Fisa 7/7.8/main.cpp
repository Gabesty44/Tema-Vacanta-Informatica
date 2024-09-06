#include <iostream>

using namespace std;

int main()
{ int n, d, k=0;
  cout << "n="; cin>>n;
  for (d=2; d<=n-1; d++)
    if (n%d==0)
    {
        k++;
        cout << d << " ";
    }
  cout << endl << k;
    return 0;
}
