#include <iostream>

using namespace std;

int main()
{ int n, i, aux, r, auxn, v=0;
  cout << "n="; cin>>n;
  auxn=n;
  for (i=2; i<=n; i++)
  {
      aux=i;
      while (aux!=0)
      {
          r=n%aux;
          n=aux;
          aux=r;
      }
      if (n==1)
        {cout << i << " ";
         v=1;}
      n=auxn;}
  if (v==0)
    cout << "Nu exista";
    return 0;
}
