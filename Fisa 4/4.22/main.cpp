#include <iostream>

using namespace std;

int main()
{ int a, b, x, sa=0, sb=0, sc=0, max=0, c, auxa, auxb, auxc;
  cout << "a="; cin>>a;
  auxa=a;
  cout << "b="; cin>>b;
  auxb=b;
  cout << "c="; cin>>x;
  auxc=x;
  while (a!=0)
  {
      c=a%10;
      a=a/10;
      sa=sa+c;
  }
  if (sa>max)
    max=sa;
  while (b!=0)
  {
      c=b%10;
      b=b/10;
      sb=sb+c;
  }
  if (sb>max)
   max=sb;
   while (x!=0)
   {
       c=x%10;
       x=x/10;
       sc=sc+c;
   }
  if (sc>max)
    max=sc;
  if (max==sa)
    cout << auxa << " ";
  if (max==sb)
    cout << auxb << " ";
  if (max==sc)
    cout << auxc;
    return 0;
}
