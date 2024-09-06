#include <iostream>

using namespace std;

int main()
{int n, c, cub, s=0;
  cout << "n="; cin>>n;
  while (n!=0)
  {
      c=n%10;
      n=n/10;
      cub=c*c*c;
      s=s+cub;
  }
  cout << s;
    return 0;
}
