#include <iostream>

using namespace std;

int main()
{ int n, i, aux, c, s=0;
  cout << "n="; cin>>n;
  for (i=n; i>=1; i--)
  {
      aux=i;
      while (aux!=0)
      {
          c=aux%10;
          aux=aux/10;
          s=s+c;
      }
      if (s%2==1)
        cout << i << " ";
      s=0;
  }
    return 0;
}
