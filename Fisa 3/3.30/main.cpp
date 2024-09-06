#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int x, i, nr=1;
    cout << "x="; cin>>x;
    cout << sqrt(x) << endl;
    for (i=1; i<=x; i++)
        nr=nr*x;
    cout << nr << endl;
    if (x<0)
        cout << -x;
    else
        cout << x;
    return 0;
}
