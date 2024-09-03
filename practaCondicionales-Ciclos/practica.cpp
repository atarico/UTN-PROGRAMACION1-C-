#include <iostream>

using namespace std;

void cantidadDigitos(){
    int numero;

    while(true){
        cout << "Ingrese un número entero (negativo para salir)";
        cin >> numero;

        if(numero < 0){
            cout << "Saliendo del programa... \n";
            break;
        }

        int contador = 0;
        int temp = numero;

        do{
            temp /= 10;
            contador++;
        } while(temp != 0);

        cout << "El numero: " << numero << " tiene " << contador << " dígitos." << endl;
    }
}

void verificarPrimoYDivisores(int numeroIngresado){
    bool esPrimo = true;

    cout << "Divisores de " << numeroIngresado << ": " << endl;

    for(int i = 1; i <= numeroIngresado; i++){
        if(numeroIngresado % i == 0){
            cout << i << endl;
            if(i != 1 && i != numeroIngresado){
                esPrimo = false;
            }
        }
    }
    cout << endl;

    if(esPrimo){

        cout << numeroIngresado << " es un numero primo";

    }else{
        cout << numeroIngresado << " NO es un numero primo";
    }



}

int main(){

    int opcion;

    do{
        cout << "Menu de opciones\n";
        cout << "1. Numeros Primos y Divisores\n";
        cout << "2. Chau\n";
        cout << "3. Contar Digitos\n";
        cout << "4. Salir\n";
        cin >> opcion;

        switch(opcion){
            case 1:
                    int numeroIngresado;
                    cout << "Ingrese un numero: " << endl;
                    cin >> numeroIngresado;
                    verificarPrimoYDivisores(numeroIngresado);
            break;
            case 2: cout << "Estoy diciendo chau.";
            break;
            case 3: cantidadDigitos();
            break;
            default: cout << "Opcion no valida.";
            break;


        }
        cout << endl;

    }while(opcion != 4);



    return 0;
}

/*

 */
