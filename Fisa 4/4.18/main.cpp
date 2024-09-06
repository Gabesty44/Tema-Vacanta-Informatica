#include <iostream>

using namespace std;

int main()
{ int x, c;
  cout << "x="; cin>>x;
  if (x%2==1)
      cout << (x%10)+(x/10)%10;
  else
    cout << "Numar par";
    return 0;
}
