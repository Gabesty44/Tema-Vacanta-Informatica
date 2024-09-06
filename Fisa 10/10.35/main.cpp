#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("date.in");
    ofstream fout("date.out");
    int n, i, x, c, c1, c2;
    fin>>n;
    for(i=1;i<=n;i++){
        fin>>x;
        int x1=x;
        if(x>99 && x<1000){
            c=x%10;
            x/=10;
            c1=x%10;
            x/=10;
            c2=x%10;
            x/=10;
            if(c!=c1 && c!=c2 && c1!=c2){
                fout<<x1<<" ";
            }
        }
    }
    return 0;
}
