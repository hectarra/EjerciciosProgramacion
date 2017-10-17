#include <cmath>
#include <iostream>
using namespace std;
int main()
{
  double PI=3.141592;
  double radio;
  double altura;
  double res;
  cout << "Introduce radio: ";
  cin >> radio;
  cout << "Introduce altura: ";
  cin >> altura;
  res=(PI*pow(radio,2)*altura)/3;
  cout << "El volumen del cono es: " << res;
  return 0;
}
