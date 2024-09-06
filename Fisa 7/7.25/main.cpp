#include <iostream>

using namespace std;

int main()
{ int n, t1, d;
 cout << "n="; cin>>n;
 for (t1=1; t1<=n; t1++)
    for (d=1; d<=t1; d++)
       if (t1%d==0)
        cout << d << " " << t1 << endl;
    return 0;
}
