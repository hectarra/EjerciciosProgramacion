#include <iostream>
using namespace std;
int main()
{
  int  fahrenheit;
  double celsius;
  double res;
  cout << "Introduce grados Fahrenheit: ";
  cin >> fahrenheit;
  res=5.0/9.0*(fahrenheit-32.0);
  cout << "Los grados en Celsius son: " << res;
  return 0;
}
