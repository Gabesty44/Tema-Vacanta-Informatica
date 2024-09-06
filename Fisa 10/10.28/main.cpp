#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.in");
    ofstream fout("bac.out");
    int n,i,a,k=0,k1=0,max=0,min=9999;
    fin>>n;
    for(i=1;i<=n;++i)
    {fin>>a;
     if(a%2==0)
     {if(a>max)
      ++k;
     }
     else
     {if(a<min)
      ++k1;
     }
    }
     if(k+k1==n)
     fout<<"DA";
     else
     fout<<"NU";
    return 0;
}
