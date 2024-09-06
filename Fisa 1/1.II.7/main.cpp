#include <iostream>

using namespace std;

int main()
{ int n, i, s=0;
  for (i=1;  i<=3; i++)
  {
      cin>>n;
      if (n>0)
        s=s+n;
  }
  cout << s;
    return 0;
}
