//Cuentas
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x=12;
  double sigma=2.1836;
  int y=3;
  double lambda=1.11695;
  double alfa=328.67;
  double  f;
  f=3*((x+sigma*y)/(pow(x,2)-pow(y,2)))-lambda*(alfa-13.7);
  cout << x << endl << sigma << endl << y << endl << lambda << endl << alfa << endl << f;
}
