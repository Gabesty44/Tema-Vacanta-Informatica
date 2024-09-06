#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");
int main()
{
    int n,i,a;
    fin>>n;
    for(i=1;i<=n;++i)
    {fin>>a;
     if(a>0)
     fout<<a<<" ";
    }
    return 0;
}
