#include <iostream>

using namespace std;

int main(){

    string userAdmin = "Pepito";
    string passwordAdmin = "Pepito123";

    string inputPassword;
    string inputUser;

    cout << "Ingrese Usuario: ";
    cin >> inputUser;

    if(inputUser != userAdmin){
        cout << "usuario Incorrecto";
    }else{
        cout << "Ingrse la contraseña: ";
        cin >> inputPassword;
    }

    if(inputPassword != passwordAdmin){
        cout << "Contraseña incorrecta";
    }else{
        cout << "Te damos la bienvenida";
    }

    return 0;
}
