#include <iostream>

using namespace std;

int main()
{ int n, c1, c2;
  cout << "n="; cin>>n;
  c1=n%10;
  c2=(n/10)%10;
  if (c1!=c2)
  { if (c1!=0)
  {cout << (10*c1)+c2 << " ";
  cout << (10*c1)+c1 << " ";}
  if (c2!=0)
  {cout << (10*c2)+c1 << " ";
  cout << (10*c2)+c2;} }
  else
   if (c1!=0)
    cout << (10*c1)+c1;
    return 0;
}
