#include <iostream>

using namespace std;

int main()
{ int x, i, max=0;
  for (i=1; i<=3; i++)
  {
      cin>>x;
      if (x>max)
        max=x;
  }
  cout << max;
    return 0;
}
