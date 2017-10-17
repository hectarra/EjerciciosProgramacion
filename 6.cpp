//Triangulo
#include <iostream>
#include <cmath>
using namespace std;
const double PI=3.141592;
int main()
{
  double lado1;
  double lado2;
  double angulo;
  double area;
  double radianes;
  cout << "Inserta medida lado 1: ";
  cin >> lado1;
  cout << "Inserta medida lado 2: ";
  cin >> lado2;
  cout << "Inserta ángulo que forman: ";
  cin >> angulo;
  radianes=angulo*PI/180;
  area=(lado1*lado2*sin(radianes))/2;
  cout << area;
  return 0;
}
