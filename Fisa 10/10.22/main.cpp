#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");
int main()
{
    int k=0,a,b;
    while(k<100)
    {fin>>a>>b;
     if(a>b)
     fout<<a<<endl;
     else
     fout<<b<<endl;
    }
    fout.close();
    return 0;
}
