#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("BAC.IN");
ofstream fout("BAC.TXT");
int main()
{   int a,k=0,d,s=0,ok;
    while(k<100)
    {fin>>a;
     ++k;
     ok=1;
     for(d=2;d<=a/2;++d)
     {if(a%d==0)
      ok=0;
     }
     if(ok==1)
     s=s+a;
    }
    fout<<s;
    return 0;
}
