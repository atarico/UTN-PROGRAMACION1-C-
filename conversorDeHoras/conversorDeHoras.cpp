#include <iostream>

using namespace std;

/** Quiero un programa que el usuario ingrese
    una determinada cantidad de horas y el programa le diga
    cuantos minutos son
*/

int main(){

  int cantidadDeHoras, cantidadDeMinutos;
  cout << "Ingresa una cantidad de horas: ";
  cin >> cantidadDeHoras;

  cantidadDeMinutos = cantidadDeHoras*60;
  cout << "La cantindad de minutos son: " << cantidadDeMinutos;


    return 0;
}
