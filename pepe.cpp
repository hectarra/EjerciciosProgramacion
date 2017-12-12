#include <iostream>
#include <cmath>
using namespace std;

int const MAX = 10;
int const CENT = -1;
typedef int tArray[MAX];

void cargarArray(tArray numeros);
void suma_digitos(tArray const numeros, tArray suma, tArray Asuma);
bool es_cuadrado_perfecto(tArray const Asuma);

int main(){
	tArray numeros, suma, Asuma;
	int suma;
	bool perfecto;
	cargarArray (numeros);
	suma_digitos(numeros, suma, Asuma);
	perfecto = es_cuadrado_perfecto(Asuma);
	if (perfecto)
		cout << "Hay un entero perfecto";
	else
		cout << "No hay ningun entero perfecto";
	system("PAUSE");
	return 0;
}

void cargarArray(tArray numeros){
	cout << "Introduce una cantidad máxima de " << MAX << " números, (para parar introduzca " << CENT << "): ";
	for (int i = 0; numeros[i-1] != CENT;  i++)
		cin >> numeros[i];
	//depurador
	for (int i = 0; i < MAX; i++)
		cout << numeros[i];

}

void suma_digitos(tArray const numeros, tArray suma, tArray Asuma){
	int i = 0;
	int numero, suma = 0;
	tArray digitos;
	while ((i < MAX) || (numeros[i] != -1)){
		numero = numeros[i];
		for (int j = 0; j < MAX; j++)
			numero % 10 = digitos[j];
		for (int w = 0; w < MAX; w++)
			suma = suma + digitos[2w + 1];
		Asuma[i] = suma;
		i++;
	}
}

bool es_cuadrado_perfecto(tArray const Asuma){
	for (int i = 0; )
}
