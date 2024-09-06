#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
ofstream fout("bac.txt");
int main()
{
    int f[1000];
    int n,i,a,max=0,maxval;
    fin>>n;
    for(i=1;i<=n;++i)
    {fin>>a;
     f[a]++;
    }
    for(i=1;i<=1000;++i)
    {if(f[i]>max)
     {max=f[i];
     maxval=i;
     }
    }
    fout<<maxval;
    return 0;
}
