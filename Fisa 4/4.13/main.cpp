#include <iostream>

using namespace std;

int main()
{ int x, i, s=0;
  for (i=1; i<=3; i++)
  {
      cin>>x;
      if (x>0)
        s=s+x;
  }
  cout << s;
    return 0;
}
