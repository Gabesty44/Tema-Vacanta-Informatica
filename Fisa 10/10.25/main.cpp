#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.txt");
ofstream fout("pare.txt");
int main()
{
    int a,i,n;
    fin>>n;
    for(i=1;i<=n;++i)
    {fin>>a;
     if(a%2==0)
     fout<<a<<" ";
    }
    fin.close();
    fout.close();
    return 0;
}
