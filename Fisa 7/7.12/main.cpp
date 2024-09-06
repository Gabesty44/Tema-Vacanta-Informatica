#include <iostream>

using namespace std;

int main()
{ int n, i, x, v=1;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      if (x<=99||x>=1000)
      v=0;
  }
  if (v==1)
    cout << "Da";
  else
    cout << "Nu";
    return 0;
}
