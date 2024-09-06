#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.txt");
ofstream fout("bac.txt");
int main()
{
    int n,k,i,a,d,a1,c,ok;
    fin>>n;
    fin>>k;
    for(i=1;i<=n;++i)
    {fin>>a;
     ok=1;
     for(d=2;d<=a/2;++d)
     if(a%d==0)
      ok=0;
      if(ok==1)
     {a1=a;
      while(a1)
      {c=a1%10;
       a1/=10;
       if(c==k)
       fout<<a<<" ";
      }
     }
     }
    return 0;
}
