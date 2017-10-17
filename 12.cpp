//Par o impar hasta cero (falla)
#include <iostream>
using namespace std;
main (){
  int n1;
  cout << "Introduce un número: ";
  cin >> n1;
  while (n1!=0){
    if (n1>=0){
      cout << "Introduce un número: ";
      cin >> n1;
      if (n1%2)
        cout << "Impar" << endl;
      else
        cout << "Par" << endl;
    }
    else{
      cout << "Introduce un número: ";
      cin >> n1;
    }
  }
return 0;
}
