#include <iostream>

using namespace std;

int main(){

    int matriz [2][2];
    int suma = 0;

    cout << "Ingresa los elementos de la matriz";

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "elementos [" << i << "][" << j <<"]: ";
            cin >> matriz[i][j];
            suma += matriz[i][j];
        }
        /* 
            Posiciones
            00 01
            10 11

            Elementos
            1 2
            3 4
        */
    }
    cout << "La suma de los elemnetos es: " << suma << endl;


    return 0;
}

