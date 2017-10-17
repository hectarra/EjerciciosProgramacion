//Fórmula
#include <cmath>
#include <iostream>
using namespace std;
const double e=2.7182;
main ()
{
  double x, y, f;
  cout << "Introduce variable x: ";
  cin >> x;
  cout << "Introduce variable y: ";
  cin >> y;
  f=sqrt(pow(1.531,(x+y))+(abs(pow(e,x)-pow(e,y))*(sin(x)-tan(y)))/(log10(y)*pow(3.141592,x)));
  cout << f;
}
