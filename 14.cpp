#include <iostream>
#include <iomanip>
using namespace std;
main(){
  //Lectura de datos
  int n;
  int i;
  i = 1;
  int multiplicacion;
  cout << "Introduce un número: ";
  cin >> n;
  while (n < 1 || n > 100){
    cout << "Introduce un número: ";
    cin >> n;
  //Programa
  }
  while(i <= 10){
    multiplicacion = i * n;
    cout << setw(2) << i << setw (2)<< "x" << setw (8) << n << setw (2) << "=" << setw (8) << multiplicacion << endl;
    i = i + 1;
  }
return 0;
}
