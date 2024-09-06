#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int k, v=0, i=1, d, kd=0;
  cout << "k="; cin>>k;
  while (v==0)
{
    for (d=1; d<=sqrt(i); d++)
        if (i%d==0)
    {
        kd++;
        if (d*d!=i)
            kd++;
    }
    if (kd==k)
    {
        cout << i;
        v=1;
    }
    kd=0;
    i++;
}
    return 0;
}
