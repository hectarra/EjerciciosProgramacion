//Préstamo
#include <iostream>
#include <cmath>
using namespace std;
main ()
{
  double capital;
  double interes_anual;
  double anos;
  double cuota;
  double intereses;
  double total;
  double ratio;
  double plazo;
  cout << "Introduce capital prestado: ";
  cin >> capital;
  cout << "Introduce interes anual: ";
  cin >> interes_anual;
  cout << "Introduce duración en años: ";
  cin >> anos;
  ratio=interes_anual/12;
  plazo=anos/12;
  cuota=(capital*ratio)/(100*(1-pow(1+(ratio/100),-plazo)));
  intereses=(cuota*plazo)-capital;
  cout << "Cuota mensual: " << cuota << " €" << endl;
  cout << "Total de lo pagado " << endl;
  cout << "- Intereses:" << intereses << " €" << endl;
  cout << "- Cantidad de amortización: " << capital << " €" << endl;
}
