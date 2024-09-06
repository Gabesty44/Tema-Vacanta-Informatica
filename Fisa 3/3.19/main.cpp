#include <iostream>

using namespace std;

int main()
{ int n, c1, c2, c3, c4;
  cout << "n="; cin>>n;
  c4=n%10;
  n=n/10;
  c3=n%10;
  n=n/10;
  c2=n%10;
  n=n/10;
  c1=n;
  cout << 1000*c4 + 100*c2 + 10*c3 + c1 << endl;
  cout << 1000*c1 + 100*c3 + 10*c2 + c4;
    return 0;
}
