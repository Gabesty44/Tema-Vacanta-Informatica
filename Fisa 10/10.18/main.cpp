#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("BAC.IN");
ofstream fout("BAC.TXT");
int main()
{
    int a,b,c;
    fin>>a>>b>>c;
    fin.close();
    while(a!=b)
    {if(a>b)
     a=a-b;
     else
     b=b-a;
    }
    while(a!=c)
    {if(a>c)
     a=a-c;
     else
     c=c-a;
    }
    fout<<a;
    fout.close();
    return 0;
}
