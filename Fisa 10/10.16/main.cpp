#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("BAC.IN");
ofstream fout("BAC.TXT");
int main()
{
    int n;
    fin>>n;
    while(n)
    {fout<<"1"<<" ";
     --n;
     fout<<"2"<<" ";
     --n;
     fout<<"3"<<" ";
     --n;
     fout<<"4"<<" ";
     --n;
     fout<<"5"<<" ";
     --n;
     fout<<"6"<<" ";
     --n;
     fout<<"7"<<" ";
     --n;
     fout<<"8"<<" ";
     --n;
     fout<<"9"<<" ";
     --n;
    }
    return 0;
}
