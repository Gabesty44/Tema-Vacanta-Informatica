#include <iostream>

using namespace std;

int main()
{ int n, c, i, s=0, max=0;
   cout << "n="; cin>>n;
   for (i=1; i<=2; i++)
   {
       c=n%10;
       n=n/10;
       if (c>max)
        max=c;
       s=s+c;
   }
   cout << max << " " << s;
    return 0;
}
