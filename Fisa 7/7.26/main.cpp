#include <iostream>

using namespace std;

int main()
{ int n, x, x2, s=0, c, i, aux, aux2;
  cout << "n="; cin>>n;
  cin>>x;
  for (i=1; i<=n-1; i++)
  {
      cin>>x2;
      aux2=x2;
      aux=x;
      while (x!=0)
      {
          c=x%10;
          x=x/10;
          s=s+c;
      }
      if (s%x2==0)
         cout << aux << " " << aux2 << endl;
      else
      {
          x2=aux2;
          x=aux;
          s=0;
          while (x2!=0)
            {c=x2%10;
             x2=x2/10;
             s=s+c;}
          if (s%x==0)
            cout << aux << " " << aux2 << endl;
      }
      x2=aux2;
      x=aux;
      x=x2;
      s=0;
  }
    return 0;
}
