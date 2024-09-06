#include <iostream>

using namespace std;

int main()
{ int x, pal=0, c1, c2, aux, c, c3;
  cout << "x="; cin>>x;
  aux=x;
  while (x!=0)
  {
      c=x%10;
      x=x/10;
      pal=pal*10+c;
  }
  x=aux;
  c1=pal%10;
  c2=(pal/10)%10;
  c3=x%10;
  if (c1>c2)
    cout << x/10;
  else if (c2>c1)
    cout << 10*c2+c3;
  else
  {
      if (c2>c3)
        cout << aux/10;
      else
        cout << 10*c2+c3;
  }
    return 0;
}
