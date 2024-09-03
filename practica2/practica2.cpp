 #include <iostream>

 using namespace std;

int pedirNumero(){
    int numeroIngresado;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numeroIngresado;

    return numeroIngresado;
}


void sumarDigitos(){

    int numero = pedirNumero();
    int suma = 0;

    while(numero > 0){

        suma += numero % 10;
        numero /= 10;

    }

    cout << "La suma de los digitos es: " << suma << endl;
}

void calcularFactorial(){
    int numero = pedirNumero();
    int factorial = 1;

    for(int i = 1; i <= numero; ++i){
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;
}



 int main(){

    int opcion;


    do{

        cout << "\n Menu de ejercicios:\n";
        cout << "1. Sumar digitos:\n";
        cout << "2. Calcular Factorial:\n";
        cout << "3. Palindromo numerico:\n";
        cout << "4. Salir:\n";
        cout << "Elegir una opcion: ";
        cin >> opcion;



            switch(opcion){
            case 1:
                sumarDigitos;
                cout << endl;
                break;

            case 2:
                calcularFactorial();
                cout << endl;
                break;

            case 3:
                //palindromoDeUnNumero();
                cout << endl;
                break;

            case 4:
                cout << "Saliendo 👋" << endl;
                cout << endl;
                break;

            default:
                cout << "Opcion no valida 😢" << endl;
        }
    } while(opcion != 4);



    return 0;
 }
