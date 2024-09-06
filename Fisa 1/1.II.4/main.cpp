#include <iostream>

using namespace std;

int main()
{ int a, b, c, d, k=0;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  cout << "c="; cin>>c;
  cout << "d="; cin>>d;
  if (a%2==0)
    k++;
  if (b%2==0)
    k++;
  if (c%2==0)
    k++;
  if (d%2==0)
    k++;

    return 0;
}
