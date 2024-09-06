#include <iostream>

using namespace std;

int main()
{ int n, c, s=0, x1, x2, x3, i, aux1, aux2, aux3;
  cout << "n="; cin>>n;
  cin>>x1;
  cin>>x2;
  for (i=1; i<=n-2; i++)
  {
      cin>>x3;
      aux1=x1;
      aux2=x2;
      aux3=x3;
      while (x1!=0)
      {
          c=x1%10;
          x1=x1/10;
          s=s+c;
      }
     while (x2!=0)
     {
         c=x2%10;
         x2=x2/10;
         s=s+c;
     }
     while (x3!=0)
     {
         c=x3%10;
         x3=x3/10;
         s=s+c;
     }
     if (s%2==0)
        cout << aux1 << " " << aux2 << " " << aux3 << endl;
     x1=aux2;
     x2=aux3;
     s=0;
  }
    return 0;
}
