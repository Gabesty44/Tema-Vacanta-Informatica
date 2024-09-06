#include <iostream>

using namespace std;

int main()
{ int a, b, kp=0, ki=0, c, i, aux;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  for (i=a; i<=b; i++)
  {
      aux=i;
      while (i!=0)
      {
          c=i%10;
          i=i/10;
          if (c%2==0)
            kp++;
          else
            ki++;
      }
      if (kp==ki)
        cout << aux << " ";
      kp=0;
      ki=0;
  }
    return 0;
}
