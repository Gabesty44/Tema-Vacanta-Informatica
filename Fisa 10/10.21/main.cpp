#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");
int main()
{
    int n,i,a,s=0,k=0;
    fin>>n;
    for(i=1;i<=n;i++)
    {fin>>a;
     if(a<=99 && a>=10)
     {s+=a;
      ++k;
     }
    }
    fin.close();
    fout<<s/k;
    fout.close();
    return 0;
}
