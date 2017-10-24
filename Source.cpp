#include <iostream>
using namespace std;
int leer_datos();
int suma_digitos(int n);
void mostrar_resultados(int resultado);

int main()
{
	int n, resultado = 0;
	n = leer_datos();
	resultado = suma_digitos(n);
	mostrar_resultados(resultado);
	system ("pause");
	return 0;
}

int leer_datos(){
	int n;
	cout << "Introduce un numero positivo: ";
	cin >> n;
	return n;
}

int suma_digitos(int n) {
	int suma;
	suma = 0;
	while (n > 0) {
		suma = n % 10 + suma;
		n = n / 10;
	}
	return suma;
}
void mostrar_resultados(int resultado) {
	cout << "La suma de sus digitos es : " << resultado << endl;
}
	
