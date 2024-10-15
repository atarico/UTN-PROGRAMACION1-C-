#include <iostream>
#include <string>

using namespace std;

int main(){

    string frase;
    int contadorA = 0;
    int contadorE = 0;
    int contadorI = 0;
    int contadorO = 0;
    int contadorU = 0;

    cout << "Ingrese la frase: ";
    getline(cin, frase);

    for(char caracter : frase){

        caracter = tolower(caracter);

        switch(caracter){
            case 'a': contadorA++; break;
            case 'e': contadorE++; break;
            case 'i': contadorI++; break;
            case 'o': contadorO++; break;
            case 'u': contadorU++; break;
        }
    }

    cout << "Cantidad de vocales en la frase: " << endl;
    cout << "letra 'a': " << contadorA << endl;
    cout << "letra 'e': " << contadorE << endl;
    cout << "letra 'i': " << contadorI << endl;
    cout << "letra 'o': " << contadorO << endl;
    cout << "letra 'u': " << contadorU << endl;

    return 0;
}
