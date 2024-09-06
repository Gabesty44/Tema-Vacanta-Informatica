#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");
int main()
{
    int n,a,b,max=-1,x,i;
    fin>>n;
    fin>>a>>b;
    for(i=1;i<=n;++i)
    {fin>>x;
     if(x>=a && x<=b && x>max)
     max=x;
    }
    if(max>-1)
    fout<<max;
    else
    fout<<"NU";
    return 0;
}
