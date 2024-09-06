#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.in");
ofstream fout("bac.txt");
int main()
{
    int n,k,i,d,k1,a;
    fin>>n>>k;
    for(i=1;i<=n;++i)
    {fin>>a;
     k1=0;
     for(d=1;d<=a;++d)
     if(a%d==0)
     ++k1;
     if(k<=k1)
     fout<<a<<" ";
    }
    return 0;
}
