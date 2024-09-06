#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("BAC.IN");
ofstream fout("BAC.TXT");
int main()
{
    int n,m,a,a1,i,i1,k=0,ok=0,nr,nr1,nr2;
    fin>>m>>n;
    for(i=1;i<=m;i++)
    {
     for(i1=1;i1<=n;i1++)
     {fin>>a;
      a1=a;
      while(a1)
      {++k;
       a1/=10;
      }
      if(nr==0)
      {nr+=a;
      }
      else
      { while(k)
        {nr*=10;
         --k;
        }
        nr+=a;
      }
      k=0;
     }
     nr1=nr;
     while(nr1)
     {nr2=nr2*10+nr1%10;
      nr1/=10;
     }
     if(nr2==nr)
     ok++;
    }
    fout<<ok;
    fin.close();
    fout.close();
    return 0;
}
