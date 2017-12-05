#include <iostream>

using namespace std;

const int MAX = 4;
typedef int tArrayEnt[MAX];

void escribir_array(tArrayEnt & n);
bool comparar_arrays(tArrayEnt const a, tArrayEnt const b);

int main(){
	tArrayEnt a, b;
	cout << "Dame el primer array";
	leer_array(a);
	cout << "Dame el segundo array";
	leer_array(b);
	if (comparar_arrays(a, b))
		cout << "Tienen los mismo elementos";
	else
		cout << "No tiene los mismos elementos";
	system("pause");
	return 0;
}

void leer_array(tArrayEnt & n){
	for (int i = 0; i < MAX; i++){
		cout << "Introduce elementos: ";
		cin >> n[i];
	}
}

bool comparar_arrays(tArrayEnt const a, tArrayEnt const b){
	bool encontrado = false;
	int cont = 0;
	tArrayEnt c;
	for (int j = 0; j < MAX; j++){
		c[j] = false;
	}
	while (cont < MAX && !encontrado){

	}
}

