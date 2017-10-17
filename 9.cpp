//Ordenar números
#include <iostream>
using namespace std;
main ()
{
  int n1, n2, n3;
  cout << "Introduce primer valor para comparar: ";
  cin >> n1;
  cout << "Introduce segundo valor para comparar: ";
  cin >> n2;
  cout << "Introduce tercer valor para comparar: ";
  cin >> n3;
  if (n3>n2 && n3>n1){
    if (n2>n1)
      cout << n3 << ", " << n2 << ", " << n1;
    else
      cout << n3 << ", " << n1 << ", " << n2;
  }
  else if (n2>n3 && n2>n1){
    if (n3>n1)
      cout << n2 << ", " << n3 << ", " << n1;
    else
      cout << n2 << ", " << n1 << ", " << n3;
  }
  else if (n1>n2 && n1>n3){
    if (n2>n3)
      cout << n1 << ", " << n2 << ", " << n3;
    else
      cout << n1 << ", " << n3 << ", " << n2;
  }
  else
    cout << "Algún valor de los tres introducidos es igual al anterior";
  return 0;
}
