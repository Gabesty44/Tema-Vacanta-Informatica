#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.txt");
ofstream fout("bac.txt");
int main()
{
    int n,a,k,i,a1,c;
    fin>>n;
    fin>>k;
    for(i=1;i<=n;++i)
    {
     fin>>a;
     a1=a;
     while(a1)
     {c=a1%10;
      a1/=10;
      if(c==k)
      fout<<a<<" ";
     }
    }
    return 0;
}
