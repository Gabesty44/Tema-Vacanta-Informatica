#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");
int main()
{
    int n,i,a,b,max=0,x,x1;
    fin>>n;
    for(i=1;i<=n;++i)
    {   max=0;
        fin>>a>>b;
        for(x=a;x<=b;++x)
        { x1=x;
          if(x1%2==0)
          { while(x1%2==0)
            {x1/=2;
            }
          }
          if(x1==1 && x>max)
          max=x;
        }
        fout<<max<<endl;
    }
    return 0;
}
