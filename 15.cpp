#include <iostream>
#include <iomanip>
using namespace std;
main(){
  float operando1;
  char operador;
  float operando2;
  float operacion;
  while (operando1=!0){
    cout << "Operando Operador Operando (0 para terminar): ";
    cin >> operando1 >> operador >> operando2;
    if (operador == '+')
    {
      operacion= operando1 + operando2;
      cout << operando1 << setw (2) << "+" << setw (2) << operando2 << setw (2) << "=" << setw (2) << operacion << endl;

    }
    else if (operador == '*')
    {
      operacion= operando1 * operando2;
      cout << operando1 << setw (2) << "*" << setw (2) << operando2 << setw (2) << "=" << setw (2) << operacion << endl;
    }
    else if (operador == '-')
    {
      operacion= operando1 - operando2;
      cout << operando1 << setw (2) << "-" << setw (2) << operando2 << setw (2) << "=" << setw (2) << operacion << endl;
    }
    else if (operador == '/')
    {
      operacion= operando1 / operando2;
      cout << operando1 << setw (2) << "/" << setw (2) << operando2 << setw (2) << "=" << setw (2) << operacion << endl;
    }
    else cout << "Introduce un operador valido: ";
  }

return 0;
}
