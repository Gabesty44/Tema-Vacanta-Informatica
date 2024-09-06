#include <iostream>

using namespace std;

int main()
{ int a, b, pal=0, i, k=0, aux, c;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  for (i=a; i<=b; i++)
  {
      aux=i;
      while (aux!=0)
      {
          c=aux%10;
          aux=aux/10;
          pal=pal*10+c;
      }
      if (pal==i)
        {cout << i << " ";
        k++;}
      pal=0;
  }
  cout << endl << k;
    return 0;
}
