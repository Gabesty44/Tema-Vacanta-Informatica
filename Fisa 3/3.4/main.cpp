#include <iostream>

using namespace std;

int main()
{ int n1, n2, n3, n4, nt;
  float m;
  cout << "n1="; cin>>n1;
  cout << "n2="; cin>>n2;
  cout << "n3="; cin>>n3;
  cout << "n4="; cin>>n4;
  cout << "nt="; cin>>nt;
  m=(n1+n2+n3+n4)/4;
  m=(3*m+nt)/4;
  cout << m;
    return 0;
}
