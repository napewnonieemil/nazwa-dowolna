// Rozk³ad na czynniki pierwsze --- zmianaaaaaaaaaaaaaaaaaaaaaaaaaaaa
// Data   : 24.03.2008 --- zmiana 2
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned int p,i,g,k;
  int d;

  cin >> p;
  g = (unsigned int)sqrt(p);
  i = 2; k = 1; d = -1;

  while(i <= g)
  {
    while(!(p % i))
    {
      cout << i << " ";
      p /= i;
    }
    if(p == 1) break;
    if(i < 3) i++;
    else
    {
      i = 6 * k + d;
      if(d == 1)
      {
        d = -1; k++;
      }
      else d = 1;
    }
  }
  if(p > 1) cout << p;
  cout << endl;
  return 0;
}
