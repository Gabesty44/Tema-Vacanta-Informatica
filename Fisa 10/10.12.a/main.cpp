#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("BAC.IN");
ofstream fout("BAC.TXT");
int main()
{   int a,k=0;
    while(k<100)
    { fin>>a;
      ++k;
      fout<<a<<" ";
      fin>>a;
      ++k;
      fout<<a<<" ";
      fin>>a;
      ++k;
      fout<<a<<" ";
      fin>>a;
      ++k;
      fout<<a<<" ";
      fin>>a;
      ++k;
      fout<<a<<endl;
    }
    fin.close();
    fout.close();
    return 0;
}
