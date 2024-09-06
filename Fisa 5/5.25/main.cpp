#include <iostream>
#include <cmath>

using namespace std;

int main()
{int n, d, k=0;
 cout << "n="; cin>>n;
 for (d=2; d<=sqrt(n); d++)
    if (n%d==0)
 {
     k++;
     if (d*d!=n)
        k++;
 }
 if (k==0)
    cout << "Numarul este prim";
 else
    cout << "Numarul nu este prim";
    return 0;
}
