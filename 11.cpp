//Calculadora de nota
#include <iostream>
using namespace std;
int main()
{
  double junio, febrero, noviembre, practica2, practica3, practica4, practica1, actividad, nota;
  cout << "Introduce nota de la primera practica: ";
  cin >> practica1;
  cout << "Introduce nota de la segunda practica: ";
  cin >> practica2;
  cout << "Introduce nota de la tercera practica: ";
  cin >> practica3;
  cout << "Introduce nota de la cuarta practica: ";
  cin >> practica4;
  cout << "Introduce nota del examen de febrero: ";
  cin >> febrero;
  cout << "Introduce nota del examen de noviembre: ";
  cin >> noviembre;
  cout << "Introduce nota del examen de junio: ";
  cin >> junio;
  cout << "Introduce nota de la actividad opcional: ";
  cin >> actividad;
  if (practica1 <=10 && practica2 <=10 && practica3 <=10 && practica4 <= 10 && junio <= 10 && febrero <=10 && noviembre <= 10 && actividad <=10 ){
    if (practica1 >=5 && practica2 >=5 && practica3 >=5 && practica4 >= 5 && junio >= 4){
        nota=practica2*0.05+practica3*0.1+practica4*0.05+noviembre*0.05+febrero*0.1+actividad*0.15+junio*0.5;
        cout << nota;
      }
      else
        cout << "Nos vemos en septiembre chavalote";
  }
  else
    cout << "Nota introducida no válida";
  return 0;
}
