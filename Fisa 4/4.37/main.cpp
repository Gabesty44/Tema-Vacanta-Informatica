#include <iostream>

using namespace std;

int main()
{ int a, b, c;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  cout << "c="; cin>>c;
  if (a+b>c&&a+c>b&&b+c>a)
    cout << "Da";
  else
    cout << "Nu";
      return 0;
}
