#include <iostream>

using namespace std;

int main()
{ int x;
  cout << "x="; cin>>x;
  if (x%2==1)
    cout << x-1 << " " << x+1;
  else
    cout << x-2 << " " << x+2;
    return 0;
}
