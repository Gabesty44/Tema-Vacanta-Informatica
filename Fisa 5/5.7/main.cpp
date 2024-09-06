#include <iostream>

using namespace std;

int main()
{ int a, b, i, s=0;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  for (i=1; i<=b; i++)
    s=s+a;
  cout << s;
    return 0;
}
