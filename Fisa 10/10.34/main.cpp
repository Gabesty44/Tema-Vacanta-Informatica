#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");
int main()
{
    int n,max=0,a,b,i,maxval1,maxval2;
    fin>>n;
    for(i=1;i<=n;++i)
    {fin>>a>>b;
     if(b-a>max)
     {max=b-a;
      maxval1=a;
      maxval2=b;}
    }
    fout<<maxval1<<" "<<maxval2;
    return 0;
}
