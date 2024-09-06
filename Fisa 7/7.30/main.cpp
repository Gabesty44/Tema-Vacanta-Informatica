#include <iostream>

using namespace std;

int main()
{ int a, b, x, y, d, sx=0, sy=0;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  for (x=a; x<=b; x++)
  {
      for (d=1; d<=x-1; d++)
        if (x%d==0)
        sx=sx+d;
      for (y=a; y<=b; y++)
      {for (d=1; d<=y-1; d++)
      if (y%d==0)
        sy=sy+d;
      if (x==sy&&y==sx)
      cout << x << " " << y << endl;
      sy=0;}
      sx=0;
  }
    return 0;
}
