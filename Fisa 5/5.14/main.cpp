#include <iostream>

using namespace std;

int main()
{ int n, k=0;
  cout << "n="; cin>>n;
  while (n!=0)
  {
      n=n/10;
      k++;
  }
  cout << k;
    return 0;
}
