#include <iostream>

using namespace std;

int main()
{ int x, k=0, c;
  cout << "x="; cin>>x;
  while (x!=0)
  {
      c=x%10;
      x=x/10;
      if (c%2==1)
        k++;
  }
  cout << k;
    return 0;
}
