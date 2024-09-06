#include <iostream>

using namespace std;

int main()
{ int n, min=10, max=0, c;
 cout << "n="; cin>>n;
 while (n!=0)
 {
     c=n%10;
     n=n/10;
     if (c<min)
        min=c;
     if (c>max)
        max=c;
 }
 cout << min << " " << max;
    return 0;
}
