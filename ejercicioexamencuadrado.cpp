#include <iostream>

using namespace std;

int const MAX = 20;
typedef int tArray [MAX];

void cargarArray (tArray num_usuario);
void suma_digitos (tArray const num_usuario, tArray sumas, bool & perfecto);
void es_cuadrado_perfecto (int suma, bool & perfecto);

int main (){
	tArray num_usuario, sumas;
	bool perfecto = false;
	cargarArray (num_usuario);
		cout << endl;
	suma_digitos (num_usuario, sumas, perfecto);
	if (perfecto)
		cout << "Hay un número perfecto";
	else
		cout << "NO hay un número perfecto";
}

void cargarArray (tArray num_usuario){
	int j = 0;
	while ((j < MAX) && (num_usuario [j - 1] != -1)){
		cout << "Introduce valores, (para acabar introducir -1 ): ";
		cin >> num_usuario [j];
		j++;
	}
}

void suma_digitos (tArray const num_usuario, tArray sumas, bool & perfecto){
	int j = 0, numero, modulo, suma, impar;
	while (((j < MAX) && (num_usuario [j] != -1)) && perfecto == false ){
		numero = num_usuario [j];
		suma = 0;
		do{
			modulo = numero % 100;
			impar = modulo / 10;
			suma = suma + impar;
			numero = numero / 100;
		} while (numero != 0);
		es_cuadrado_perfecto (suma, perfecto);
		j++;
	}
}

void es_cuadrado_perfecto (int suma, bool & perfecto){
	int i = 0;
	while (i * i <= suma){
		if (i * i == suma)
			perfecto = true;
		i++;
	}
}
