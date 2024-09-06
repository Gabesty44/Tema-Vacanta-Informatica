#include <iostream>

using namespace std;

int main()
{ float x, y, z;
  int px, py, pz;
  cout << "x="; cin>>x;
  cout << "y="; cin>>y;
  cout << "z="; cin>>z;
  px=x/1;
  py=y/1;
  pz=z/1;
  if (x<0)
    px=px-1;
  if (y<0)
    py=py-1;
  if (z<0)
    pz=pz-1;
  cout << px << " " << py << " " << pz;
      return 0;
}
