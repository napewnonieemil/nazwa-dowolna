// Liczby podzielne --- zmianaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
// Data   : 11.03.2008 --- zmiana 2
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>

using namespace std;

const int MAXP = 1000;

int main()
{
  int a,b,i,j,n,P[MAXP];

  cin >> a >> b >> n;
  for(i = 0; i < n; i++)
    cin >> P[i];

  for(i = a; i <= b; i++)
    for(j = 0; j < n; j++)
      if(i % P[j] == 0)
      {
        cout << i << " ";
        break;
      }
  cout << endl;
  return 0;
}
