#include <iostream>

using namespace std;

int main()
{ int x1, y1, x2, y2, xs, ys, r, auxy1, auxy2, x3, y3;
  cout << "x1="; cin>>x1;
  cout << "y1="; cin>>y1;
  cout << "x2="; cin>>x2;
  cout << "y2="; cin>>y2;
  auxy1=y1;
  auxy2=y2;
  x3=x1*x2;
  y3=y1*y2;
  if (y1<y2)
    {y1=y1+y2;
    y2=y1-y2;
    y1=y1-y2;}
  while (y1!=0)
  {
      r=y1%y2;
      y1=y2;
      y2=r;
  }
  ys=(auxy1*auxy2)/y1;
  xs=(x1*y1)+(x2*y1);
  cout << xs << "/" << ys << " ";
  int auxx3=x3;
  int auxy3=y3;
  while (x3!=y3)
   if (x3>y3)
    x3=x3-y3;
   else
    y3=y3-x3;
  x3=auxx3/x3;
  y3=auxy3/x3;
  cout << x3 << "/" << y3;
    return 0;
}
