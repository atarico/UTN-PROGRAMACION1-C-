#include<iostream>

using namespace std;


int main(){

    const double PI = 3.14159;
    double radio, area;

    cout << "ingrese el radio del circulo: ";
    cin >> radio;

    area = PI * radio * radio;
    cout << "El area del circulo es: " << area << endl;


    return 0;
}
