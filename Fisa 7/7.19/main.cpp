#include <iostream>

using namespace std;

int main()
{ int s, t1, t2, t3, aux, aux2;
  cout << "s="; cin>>s;
  aux=s;
  for (t1=0; t1<=s; t1++)
  {
      s=s-t1;
      aux2=s;
      for (t2=0; t2<=s; t2++)
          if (t1!=t2)
          {
              s=s-t2;
              t3=s;
              if (t3!=t1&&t3!=t2)
                cout << t1 << "+" << t2 << "+" << t3 << endl;
              s=aux2;
          }
     s=aux;
  }
    return 0;
}
