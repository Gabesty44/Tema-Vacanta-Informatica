#include <iostream>

using namespace std;

int main()
{ int n, pal2=0, nr=0, pal1=0, i, c;
  cout << "n="; cin>>n;
  for (i=1; i<=2; i++)
  {
      c=n%10;
      n=n/10;
      pal2=pal2*10+c;
  }
  while (pal2!=0)
  {
      c=pal2%10;
      pal2=pal2/10;
      nr=nr*10+c;
  }
  nr=nr*10+(n%10);
  n=n/10;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      pal1=pal1*10+c;
  }
  while (pal1!=0)
  {
      c=pal1%10;
      pal1=pal1/10;
      nr=nr*10+c;
  }
  cout << nr;
    return 0;
}
