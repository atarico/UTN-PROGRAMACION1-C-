#include <iostream>

using namespace std;

int main(){

    string frutas[] = {"frutilla", "arandanos", "kiwi", "banana", "pera"};
     int tamanio = sizeof(frutas) / sizeof(frutas[0]);

    cout << "Esta es mi lista de frutas con un for comun: \n";
    for(int i = 0; i < tamanio; i++){
        cout << frutas[i] << endl;
    }

    cout << endl;

    cout << "Esta es mi lista de frutas con un for en rango: \n";
    for(string unaFruta : frutas){
        cout << unaFruta << endl;
    }



    cout << endl;
    cout << endl;



    string palabra = "pepito";
cout << "la palabra " << palabra << " tiene " << palabra.length() << " letras";

    return 0;
}







