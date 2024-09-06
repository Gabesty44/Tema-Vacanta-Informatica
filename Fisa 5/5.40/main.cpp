#include <iostream>

using namespace std;

int main()
{ int n, d=2, p=0;
  cout << "n="; cin>>n;
  while (n!=1)
  {
      while (n%d==0)
      {
          n=n/d;
          p++;
      }
      cout << d << " " << p << endl;
      p=0;
      d++;
  }
    return 0;
}
