#include <iostream>

using namespace std;

int main()
{ int n, pal=0, c, aux;
  cout << "n="; cin>>n;
  aux=n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      pal=pal*10+c;
  }
  if (aux==pal)
    cout << "Numarul este palindrom";
  else
    cout << "Numarul nu este palindrom";
    return 0;
}

