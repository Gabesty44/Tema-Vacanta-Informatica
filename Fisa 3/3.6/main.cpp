#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int a, b, c, p=0;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  cout << "c="; cin>>c;
  p=a+b+c;
  cout << p << endl;
  p=p/2;
  cout << sqrt (p*(p-a)*(p-b)*(p-c));
    return 0;
}
