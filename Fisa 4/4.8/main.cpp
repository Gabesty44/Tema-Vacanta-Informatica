#include <iostream>

using namespace std;

int main()
{ int x, i, k=0;
  for (i=1; i<=4; i++)
  {
      cin>>x;
      if (x%2==0)
        k++;
  }
  cout << k;
    return 0;
}
