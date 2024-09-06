#include <iostream>

using namespace std;

int main()
{ int x, cz, cu;
  cout << "x=";  cin>>x;
  cu=x%10;
  cz=(x/10)%10;
  if (cu==cz)
    cout << x+1 << " " << x+2;
  else
    if (cz>=cu)
    cout << cz;
    else
        cout << cu;
    return 0;
}
