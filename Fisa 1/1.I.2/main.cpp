#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int s1=0, s=0, n1, n2, n3, n4, nt;
  float m;
  cout << "n1="; cin>>n1;
  cout << "n2="; cin>>n2;
  cout << "n3="; cin>>n3;
  cout << "n4="; cin>>n4;
  cout << "nt="; cin>>nt;
  s1=(n1+n2+n3+n4)/4;
  s=(3*s1)+nt;
  m=s/4;
  cout << m;
    return 0;
}
