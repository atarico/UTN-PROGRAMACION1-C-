#include <iostream>

using namespace std;

int main(){

    int largoDelArray = 5;

    string array[largoDelArray];

    // armo el array
    cout << "ingrese los numeros del array: \n";
    for (int i = 0; i < largoDelArray; i++)
    {
        cin >> array[i];
    }

    cout << endl;
    
    // mustro el array
    cout << "Mostrando array: \n";
    for (int i = 0; i < largoDelArray; i++)
    {
        cout << array[i] << " ";
    }


    // algoritmo bubble sort
    for(int i = 0; i < largoDelArray - 1; i++){
        for (int j = 0; j < largoDelArray - i - 1; j++)
        {
            if(array[j] > array[j + 1]){
                //Intercambios
                string auxiliar = array[j];
                array[j] = array[j + 1];
                array[j + 1] = auxiliar;
            }
        }
    }

    cout << "\nNumeros ordenados: \n";

    for(int i = 0; i < largoDelArray; i++){
        
        cout << array[i] << " ";
    }

    

    return 0;
}