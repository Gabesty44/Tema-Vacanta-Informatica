#include <iostream>

using namespace std;

int main()
{ int a, b, c, s=0;
  for (a=1; a<=9; a++)
    for (b=1; b<=9; b++)
    for (c=1; c<=9; c++)
  {
      s=a+2*b+c;
      if (s>=10&&s<=99)
        if (s%10==s/10)
        cout << 1000*a+110*b+c << " ";
      s=0;
  }
    return 0;
}
