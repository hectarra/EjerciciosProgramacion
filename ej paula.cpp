#include <iostream>

using namespace std;

typedef enum {noPresentado, suspenso, aprobado, notable, sobresaliente, matriculaDeHonor} tCalificacion;

tCalificacion double_a_tCalificacion (int nota);
string tCalificacion_a_string (tCalificacion calif);
int introducir_nota ();

int main (){
        double nota1, nota2;
        string nota_escrita1, nota_escrita2;
        tCalificacion calif1, calif2;

        //ENTRADA DE VALORES
        nota1 = introducir_nota ();
        nota2 = introducir_nota ();

        // CONVERSIONES
        calif1 = double_a_tCalificacion (nota1);
        calif2 = double_a_tCalificacion (nota2);
        nota_escrita1 = tCalificacion_a_string (calif1);
        nota_escrita2 = tCalificacion_a_string (calif2);

        //SALIDA DE VALORES
        cout << nota_escrita1 << ": " << nota1 << endl;
        cout << nota_escrita2 << ": " << nota2 << endl;

//BUENO, Y AHORA A DORMIR zzz... BUENAS NOCHES JE JE
}

int introducir_nota (){
        int nota;
        do {
                cout << "Introduce valor de la primera nota: ";
                cin >> nota;
        } while (nota < 0 && nota > 10);
}

tCalificacion double_a_tCalificacion (int nota){
        tCalificacion calif;
        if (nota == 0)
                calif = noPresentado;
        else if ((nota > 0) && (nota < 5))
                calif = suspenso;
        else if ((nota >= 5) && (nota < 7))
                calif = aprobado;
        else if ((nota >= 7 ) && (nota < 9))
                calif =  notable;
        else if ((nota >= 9) && (nota < 10))
                calif = sobresaliente;
        else
                calif = matriculaDeHonor;
        return calif;
}

string tCalificacion_a_string (tCalificacion calif){
        string nota_escrita;
        switch (calif) {
        case noPresentado:
                nota_escrita = "NO PRESENTADO";
                break;
        case suspenso:
                nota_escrita = "SUSPENSO";
                break;
        case aprobado:
                nota_escrita = "APROBADO";
                break;
        case notable:
                nota_escrita = "NOTABLE";
                break;
        case sobresaliente:
                nota_escrita = "SOBRESALIENTE";
                break;
        case matriculaDeHonor:
                nota_escrita = "MATRICULA DE HONOR";
                break;
        }
        return nota_escrita;
}
