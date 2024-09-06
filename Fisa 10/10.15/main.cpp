#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("DATE.IN");
ofstream fout("DATE.OUT");
int main()
{
    int a,a1,c,k=0;
    while(k<100)
    {fin>>a;
    a1=a;
    while(a1>9)
    {a1/=10;
     c=a1%10;
    }
    if(c%2==0)
    fout<<a<<" ";
    c=1;
    ++k;
    }
    return 0;
}
