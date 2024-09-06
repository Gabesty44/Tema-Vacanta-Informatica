#include <iostream>

using namespace std;

int main()
{ int a, b, i;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  for (i=b; i>=a; i--)
  {
      if (b%2==0)
       cout << b << " ";
      b=b-1;
  }
    return 0;
}
