#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("BAC.IN");
ofstream fout("BAC.TXT");
int main()
{
    int n, d, k, k1;
    float x1, x;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>x;
        x1=x;
        k1=0;
        k=0;
        while(x>0){
            k1++;
            x--;
        }
        k1--;
        for(d=1;d<=k1;d++){
            if(k1%d==0){
                k++;
            }
        }
        if(k==2){
            fout<<x1<<" ";
        }
    }
    return 0;
}
