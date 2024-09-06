#include <iostream>

using namespace std;

int main()
{ int a, b;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  if (b!=0)
    cout << a%b;
  else
    cout << "Impartire imposibila";
    return 0;
}
