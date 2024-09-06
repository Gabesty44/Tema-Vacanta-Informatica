#include <iostream>

using namespace std;

int main()
{ int i, aux, pc, c;
  for (i=1000; i<=9999; i++)
  {
      aux=i;
      while (aux>=100)
        aux=aux/10;
      c=aux%10;
      pc=(aux/10)%10;
      if (c==4*pc)
        cout << i << " ";
  }
    return 0;
}
