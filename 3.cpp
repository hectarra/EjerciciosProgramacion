//Tiempo en segundos a horas minutos y segundos
#include <iostream>
using namespace std;
int main()
{
  int segundos, minutos, horas, res1, res2;
  cout << "Introduce segundos: ";
  cin >> segundos;
  horas=segundos/3600;
  res1=segundos%3600;
  minutos=res1/60;
  res2=res1%60;
  cout << "Equivale a: " << horas << " horas, " << minutos << " minutos y " << res2 << " segundos.";
}
