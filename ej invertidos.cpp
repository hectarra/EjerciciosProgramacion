// Invertidos en output

#include <iostream>
#include <fstream>

using namespace std;

int const MAX = 10;
typedef int tArray [MAX];

void leer_texto (tArray numeros);
void invertir (tArray numeros);
void escribir_texto (tArray numeros);

int main (){
        tArray numeros;
        leer_texto (numeros);
        invertir (numeros);
        escribir_texto (numeros);
        return 0;
}

void leer_texto (tArray numeros){
        int i = -1;
        ifstream archivo;
        int numero;
        archivo.open("input.txt");
        if (archivo.is_open()) {
                do {
                        i++;
                        archivo >> numeros [i];
                } while (numeros [i] > 0);
        }
        archivo.close ();

}

void invertir (tArray numeros){
  tArray invertido;
  int i = 0, suma = 0, cont = 1;
  int numero;
  while ((i < MAX) && (numeros[i] != 0)){
    numero = numeros [i];
    suma = 0;
    while (numero != 0){
      suma = suma * 10 + numero % 10;
      numero = numero / 10;
    }
    numeros[i] = suma;
    i++;
}
for (int j = 0; j < MAX; j++)
     cout << numeros [j] << endl;
}

void escribir_texto (tArray numeros){
  ofstream archivo;
  archivo.open("output.txt");
  for (int i = 0; numeros[i] != 0; i++)
    archivo << numeros[i] << endl;
}
