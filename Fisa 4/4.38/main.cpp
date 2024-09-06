#include <iostream>

using namespace std;

int main()
{ int n, pal=0, aux, k=0, c;
  cout << "n="; cin>>n;
  aux=n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      pal=pal*10+c;
      k++;
  }
  n=aux;
  if (k%2==0)
    cout << pal;
  else
    cout << pal%10;
    return 0;
}
