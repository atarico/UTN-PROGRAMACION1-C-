#include <iostream>

using namespace std;


int myLengthWhile(string frase){
    int contador = 0;

    while(frase[contador] != '\0'){
        contador++
    }

    return contador;
}

int myLengthFor(string frase){
    int contador = 0;

    for(char caracter : frase){
        contador++
    }

    return contador;
}

int main(){

    string frase;

    cout << "Ingrese la frase";
    getline(cin, frase);

    int largoFrase = myLengthWhile(frase);


    cout << "El largo de la frase es: " << largoFrase << " caracteres.";



    return 0;
}