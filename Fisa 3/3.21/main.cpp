#include <iostream>

using namespace std;

int main()
{ int n, c, pal=0, nr=0, i;
  cout << "n="; cin>>n;
  for (i=1; i<=5; i++)
      if (i%2==1)
        {
            c=n%10;
            n=n/10;
            pal=pal*10+c;
        }
      else
        n=n/10;
  while (pal!=0)
  {
      c=pal%10;
      pal=pal/10;
      nr=nr*10+c;
  }
  cout << nr;
    return 0;
}
