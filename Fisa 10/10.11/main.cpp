#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.txt");
int main()
{
    int n,i;
    fin>>n;
    for(i=n;i>=0;i-=2)
    { if(i%2==1)
      {i--;
      fout<<i<<" ";}
      else
      fout<<i<<" ";
    }
    return 0;
}
