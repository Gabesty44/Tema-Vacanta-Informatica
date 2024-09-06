#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int a, b;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  if (a%b==0||b%a==0)
    cout << (a+b)/2;
  else
    cout << sqrt(a*b);
    return 0;
}
