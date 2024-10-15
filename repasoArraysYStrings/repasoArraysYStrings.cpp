#include <iostream>
#include <vector>

using namespace std;

vector<int> invertirVector(vector<int>& vectorOriginal){
    vector<int> invertido;

    for(int i = vectorOriginal.size() -1; i >= 0; i-- ){
        invertido.push_back(vectorOriginal[i]);
    }

    return invertido;
}


string palabraMasLarga(vector<string>& palabras){

    string masLarga = "";
    for(string& palabra : palabras){
        if(palabra.length() > masLarga.length()){
            masLarga = palabra;
        }
    }

    return masLarga;
}


int main(){

    //Ejercicio 1:
    vector<int> vectorOriginal = {1, 2, 3, 4, 5};
    cout << "Invertir un vector de enteros:\n";
    for(int numero : invertirVector(vectorOriginal)) {
        cout << numero << " ";
    }
    cout << endl;

    //Ejercico 2:
    vector<string> palabras = {"hola", "mundo", "largisima", "chiqui"};
    cout << "Buscar palabra mas larga:\n";
    for(string palabra : palabras){
        cout << palabra << " ";
    }
    cout << endl;
    cout << palabraMasLarga(palabras);
    cout << endl;
    
    return 0;
}


