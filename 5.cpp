//Sueldos
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double sueldo_bruto, sueldo_base, impuestos, comp_dest, comp_aca, total, extras;
  int hijos, mayores, irpf;
  cout << "Introduce sueldo base: ";
  cin >> sueldo_base;
  cout << "Introduce complemento de destino: ";
  cin >> comp_dest;
  cout << "Introduce complemento academico: ";
  cin >> comp_aca;
  cout << "Introduce horas extra: ";
  cin >> extras;
  cout << "Introduce número de hijos: ";
  cin >> hijos;
  cout << "Introduce número de personas mayores dependientes: ";
  cin >> mayores;
  sueldo_bruto=sueldo_base+(extras*23)+comp_aca+comp_dest;
  irpf=24-hijos*2-mayores;
  impuestos=(sueldo_bruto*irpf)/100;
  total=sueldo_bruto-impuestos;
  cout << "Sueldo base: " << sueldo_base << " €" << endl;
  cout << "Complemento de destino: " << comp_dest << " €" << endl;
  cout << "Complemento de cargo académico: " << comp_aca << " €" << endl;
  cout << "Horas extras realizadas: " << extras << endl;
  cout << "Hijos: " << hijos << endl;
  cout << "Mayores: " << mayores << endl;
  cout << "Cálculo de la nómina.-" << endl;
  cout << "Sueldo bruto: " << sueldo_bruto << " €" << endl;
  cout << "Porcentaje de IRPF: " << irpf << "%" << endl;
  cout << "Retención por IRPF: " << impuestos << " €" << endl;
  cout << "Sueldo neto: " << total << " €" << endl;
  return 0;
}
