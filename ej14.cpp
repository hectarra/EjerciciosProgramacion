#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	int fin;
	int i= 0;
	int suma = 0;
	cout << "Introduce un numero para calcular su cuadrado: ";
	cin >> n;
	while (n != 0 && i != n){
		fin = 2 * (n - i) - 1;
		i = i + 1;
		suma = suma + fin;
	}
	cout << suma;
	system("pause");
}