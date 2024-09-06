#include <iostream>

using namespace std;

int main()
{ int n, s=0, i;
    cout << "n="; cin>>n;
    for (i=1; i<=n; i++)
    {
        s=s+i;
    }
    cout << s << " ";
    s=0;
    for (i=1; i<=n; i++)
        if (i%2==0)
        s=s+i;
        else
            n++;
    cout << s << " ";
    s=0;
    for (i=1; i<=n; i++)
        if (i%2==1)
        s=s+i;
        else
            n++;
    cout << s;
    return 0;
}
