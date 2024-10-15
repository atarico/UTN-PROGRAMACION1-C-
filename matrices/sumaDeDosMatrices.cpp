#include <iostream>

using namespace std;

void sumarMatrices(int matrizA[3][3], int matrizB[3][3], int matrizSuma[3][3]){
    
    cout << "\nSuma de los elementos de las matrices A y B: \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            matrizSuma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void mostrarMatriz(int matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int matrizA[3][3], matrizB[3][3], matrizSuma[3][3];

    cout << "Ingrese los datos de la matrizA: \n";

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "elementos [" << i << "][" << j <<"]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << endl;

    cout << "Ingrese los datos de la matrizB: \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "elementos [" << i << "][" << j <<"]: ";
            cin >> matrizB[i][j];
        }
    }

    sumarMatrices(matrizA, matrizB, matrizSuma);

    mostrarMatriz(matrizSuma);

    return 0;
}