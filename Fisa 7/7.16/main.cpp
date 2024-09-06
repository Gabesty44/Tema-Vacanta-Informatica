#include <iostream>

using namespace std;

int main()
{ int n, a, b, i, v=1;
  cout << "n="; cin>>n;
  cin>>a;
  for (i=1; i<=n-1; i++)
  {
      cin>>b;
      if (b%a!=0)
        v=0;
      a=b;
  }
  if (v==1)
    cout << "Da";
  else
    cout << "Nu";

    return 0;
}
