#include <iostream>

using namespace std;

int main()
{  int x, y, z, i;
   cout<< "x="; cin>>x;
   cout << "y="; cin>>y;
   cout << "z="; cin>>z;
   for (i=1; i<=3; i++)
   {
       cout << x%10 << " ";
       x=x/10;
   }
    for (i=1; i<=3; i++)
   {
       cout << y%10 << " ";
       y=y/10;
   }
   for (i=1; i<=3; i++)
   {
       cout << z%10 << " ";
       z=z/10;
   }
   return 0;}
