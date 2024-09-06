#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int i, n, kp=0, ki=0, sp=0, si=0;
  for (i=1; i<=5; i++)
  {
      cout << "n="; cin>>n;
      if (n%2==0)
      {
          kp++;
          sp=sp+n;
      }
      if (n%2==1)
      {
          ki++;
          si=si+n;
      }
  }
  if (kp==0)
    cout << "Nu exista" << " ";
  else
    cout << sp/kp;
  if (ki==0)
    cout << "Nu exista";
  else
    cout << si/ki;
    return 0;
}
