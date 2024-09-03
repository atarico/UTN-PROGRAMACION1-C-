#include <iostream>

using namespace std;

int main() {

    double alturaUsuario, pesoUsuario, calculoImc;

    cout << "Ingrese su altura: ";
    cin >> alturaUsuario;

    cout << "Ingrese su peso: ";
    cin >> pesoUsuario;

    calculoImc = pesoUsuario / (alturaUsuario*alturaUsuario);

    if (calculoImc < 18.5) {
        cout << "Su IMC es " << calculoImc << " Usted tiene Bajo peso";

    } else if (calculoImc >= 18.5 && calculoImc < 24.9) {
       cout << "Su IMC es " << calculoImc << " Usted tiene Peso normal";

    } else if (calculoImc > 25 && calculoImc < 30) {
        cout << "Su IMC es " << calculoImc << " Usted tiene Sobrepeso";

    } else {
        cout << "Usted esta muy gorito";
    }

    return 0;
}
