#include <iostream>

using namespace std;

const int MAX = 10;
typedef int tArrayEnt[MAX];
void leerArray(tArrayEnt a);
bool estaElem(const tArrayEnt a, int n);
int elemento(const tArrayEnt a);

int main(){
	int n;
	tArrayEnt a;
	leerArray(a);
	n = elemento(a);
	if (estaElem(a, n))
		cout << " Esta repetido." << endl;
	else
		cout << "No esta repetido" << endl;
	system("pause");
	return 0;
}

void leerArray(tArrayEnt a){
	for (int i = 0; i < MAX; i++){
		cout << "Introduce un entero: ";
		cin >> a[i];
	}
}

bool estaElem(const tArrayEnt a, int n){
	int i = 0;
	while ((i < MAX) && (a[i] != n))
		i++;
	return i < MAX;
}

int elemento(const tArrayEnt a){
	int n;
	for (int i = 0; i < MAX; i++){
		n = a[i];
	}
	return n;
}
