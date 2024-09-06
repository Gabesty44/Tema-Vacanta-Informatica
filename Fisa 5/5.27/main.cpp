#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int i, c, pal=0, d, k=0, aux;
  for (i=100; i<=999; i++)
  {   aux=i;
      for (d=2; d<=sqrt(i); d++)
        if (i%d==0)
      {
          k++;
          if (d*d!=i)
            k++;
      }
      if (k==0)
      {
          while (i!=0)
          {
              c=i%10;
              i=i/10;
              pal=pal*10+c;
          }
            for (d=2; d<=sqrt(pal); d++)
        if (pal%d==0)
      {
          k++;
          if (d*d!=pal)
            k++;
      }
      if (k==0)
        cout << aux << " ";
      }
  }
    return 0;
}
