#include <iostream>

using namespace std;

///[*] declaramos 3 variables -> numero1, numero2, resultado.
///[*] incicializamos las numero1 y numero2 variables con numeros randoms
///[*] sumamos las variables y guardamos en resultado
///[*] mostramos resultado

///[] le pedimos al usuario que ingrese los numeros
///[] guardamos esos datos
///[] hacemos la operacion


int main(){

    double numero1, numero2, resultado;

    cout << "ingrese el primer numero: ";
    cin >> numero1;

    cout << "ingrese el segundo numero: ";
    cin >> numero2;

    resultado = numero1 + numero2;
    cout << "El resultado de la suma es: " << resultado << endl;

    resultado = numero1 - numero2;
    cout << "El resultado de la resta es: " << resultado << endl;







    return 0;
}
