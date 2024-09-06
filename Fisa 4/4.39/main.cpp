#include <iostream>

using namespace std;

int main()
{ int n, pal=0, aux, c;
   cout << "n="; cin>>n;
   aux=n;
   while (n!=0)
   {
       c=n%10;
       n=n/10;
       pal=pal*10+c;
   }
   if (pal==aux)
    cout << "Da";
   else
    cout << "Nu";
    return 0;
}
