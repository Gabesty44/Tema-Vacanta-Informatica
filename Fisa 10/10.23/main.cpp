#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n, x, i, y, k=0;
    fin>>n;
    fin>>x;
    for(i=1;i<=n;i++){
        fin>>y;
        if(y==x){
            fout<<"DA";
            k--;
        }
        k++;
    }
    if(k==n){
        fout<<"NU";
    }
    return 0;
}
