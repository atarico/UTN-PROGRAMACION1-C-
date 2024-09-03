#include <iostream>

using namespace std;

int main(){

    /*for(int i = 1; i <= 5; i++){
        cout << "Algo: " << i << endl;
    }*/

    /*
    int contador = 1;

    while(contador < 5){
        cout << "Algo" << endl;
        contador++;
    }*/

    int opcion;

    do{
        cout << "Menu de opciones\n";
        cout << "1. Holi\n";
        cout << "2. Chau\n";
        cout << "3. Salir\n";
        cin >> opcion;

        switch(opcion){
            case 1: cout << "Estoy diciendo holi.";
            break;
            case 2: cout << "Estoy diciendo chau.";
            break;
            default: cout << "Opcion no valida.";
            break;


        }
        cout << endl;

    }while(opcion != 3);



    return 0;
}
