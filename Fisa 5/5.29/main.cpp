#include <iostream>

using namespace std;

int main()
{ int n, i, aux, pal=0, c;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      aux=i;
      while (aux!=0)
      {
          c=aux%10;
          aux=aux/10;
          pal=pal*10+c;
      }
      if (i==pal)
        cout << i << " ";
      pal=0;
  }
    return 0;
}
