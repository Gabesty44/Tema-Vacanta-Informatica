#include <iostream>

using namespace std;

int main()
{ int c1, c2, c3, n;
  cout << "c1="; cin>>c1;
  cout << "c2="; cin>>c2;
  cout << "c3="; cin>>c3;
  n=100*c1+10*c2+c3;
  cout << n << " ";
  n=100*c1+10*c3+c2;
  cout << n << " ";
  n=100*c2+10*c1+c3;
  cout << n << " ";
  n=100*c2+10*c3+c1;
  cout << n << " ";
  n=100*c3+10*c1+c2;
  cout << n << " ";
  n=100*c3+10*c2+c1;
  cout << n;
    return 0;
}
