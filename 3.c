// Liczby Fibonacciego --- zmianaaaaaaaaaaaaaaaaaaaaaaaaaasssssaaaaaaaaaaa
// Data:   20.04.2008 --- zmiana 2
// (C)2012 mgr Jerzy Wa³aszek
//---------------------------

#include <iostream>

using namespace std;

unsigned long fibo(int n)
{
  if(n <= 1) return n;
  else return fibo(n - 2) + fibo(n - 1);
}

int main()
{
  int n;

  cin >> n;
  cout << fibo(n) << "\n\n";
  return 0;
}
