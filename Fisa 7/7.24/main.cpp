#include <iostream>

using namespace std;

int main()
{ int n, aux;
  cout << "n="; cin>>n;
  aux=n;
  while (n<=30000)
  {
      cout << n << " ";
      n=n*aux;
  }
    return 0;
}
