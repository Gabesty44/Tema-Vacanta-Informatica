#include <iostream>

using namespace std;

int main()
{ int n, p, d, auxp;
  cout << "n="; cin>>n;
  cout << "p="; cin>>p;
  auxp=p;
  for (d=n-1; d>=2; d--)
  {
      if (n%d==0)
       p--;
  }
  if (p>0)
    cout << "Nu exista";
  else
  {
      p=auxp;
      for (d=n-1; d>=2; d--)
       if (n%d==0&&p>0)
       {
           cout << d << " ";
           p--;
       }
  }
    return 0;
}
