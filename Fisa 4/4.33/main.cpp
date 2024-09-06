#include <iostream>

using namespace std;

int main()
{ int x, y;
  cout << "x="; cin>>x;
  cout << "y="; cin>>y;
  if (x==0&&y==0)
    cout << "In origine";
  else if (x==0)
    cout << "Pe axa Oy";
  else if (y==0)
    cout << "Pe axa Ox";
  else if (x>0&&y>0)
    cout << "Cadranul I";
  else if (x<0&&y>0)
    cout << "Cadranul II";
  else if (x<0&&y<0)
    cout << "Cadranul III";
  else
    cout << "Cadranul IV";
    return 0;
}
