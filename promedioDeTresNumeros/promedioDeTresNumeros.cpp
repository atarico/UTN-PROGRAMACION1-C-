#include<iostream>

using namespace std;

/**
[]Declaramos 3 variables para los numeros(int) y una para el promedio(double)
[]pedimos al usuario que ingrese los numeros -> guardamos esos numeros
[]sumamos las variables numericas dividimos por 3 -> guardamos en promedio
[]Mostramos el promedio
*/

int main(){

    double primerNota, segundaNota, terceraNota, promedio;


    cout<<"Ingrese la primer nota: ";
    cin >> primerNota;
    cout<<"Ingrese la segunda nota: ";
    cin >> segundaNota;
    cout<<"Ingrese la tercer nota: ";
    cin >> terceraNota;

    promedio = (primerNota + segundaNota + terceraNota)/3;

    cout << "El promedio del almuno es: " << promedio << endl;



    return 0;
}
