#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac,out");
int main()
{
    int a,a1,a2,a3,i,n;
    fin>>n;
    fin>>a>>a1>>a2>>a3;
    for(i=1;i<=n-4;++i)
    { if(a<a1 && a1<a2 && a2<a3)
      fout<<a<<" "<<a1<<" "<<a2<<" "<<a3;
      a3=a2;
      a2=a1;
      a1=a;
      fin>>a;
    }
    return 0;
}
