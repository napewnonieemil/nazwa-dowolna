// NWW --- zmiana
// Data   : 2.04.2008 --- zmiana 2
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>

using namespace std;

int main()
{
  unsigned long long a,b,t,ab;

  cin >> a >> b;
  ab = a * b;
  while(b)
  {
    t = b;
    b = a % b;
    a = t;
  }
  ab /= a;
  cout << ab << endl << endl;
  return 0;
}
