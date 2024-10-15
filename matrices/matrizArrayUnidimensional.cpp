#include <iostream>

using namespace std;

int main(){

    int matriz[3][3], arrayUnidimensional[9];
    int k = 0; //indice para el arrayUnidimensional

    cout << "Ingrese los datos de la matriz: \n";

    // armar la matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "elementos [" << i << "][" << j <<"]: ";
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    //convertir la matriz a un arr unid...
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            arrayUnidimensional[k++] = matriz[i][j];
        }
    }

    //mostrar el array
    cout << "Array resultado: \n";

    for(int i = 0; i < 9; i++){
        cout << arrayUnidimensional[i] << " ";
    }



    return 0;
}

/* 
    1 2 3 
    4 5 6  ==> 1 2 3 4 5 6 7 8 9
    7 8 9
 */