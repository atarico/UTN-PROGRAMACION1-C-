#include <iostream>
#include <vector>

using namespace std;

struct Tarea{
    string descripcion;
    bool completada;
};

void mostrarMenu(){
    cout << "\n==== Menu opciones ====\n";
    cout << "1. Agregar tarea\n";
    cout << "2. Marcar como completada\n";
    cout << "3. Mostrar todas las tareas\n";
    cout << "4. salir\n";
    cout << "----------------------------\n";
    cout << "Elija una opcion: ";
}

void agregarTarea(vector<Tarea>& listaTareas){
    string descripcion;
    cout << "Ingrese la descripcion de la tarea: \n";

    cin.ignore();
    getline(cin, descripcion);

    Tarea nuevaTarea = {descripcion, false};
    listaTareas.push_back(nuevaTarea);
    cout << "Tarea agregada\n";
}

void completarTarea(vector<Tarea>& listaTareas){
    if(listaTareas.empty()){
        cout << "La lista no contiene tareas\n";
        return;
    }

    int indice;
    cout << "Ingrese el numero de la tarea a completar: ";
    cin >> indice;

    if(indice > 0 && indice <= listaTareas.size()){

        listaTareas[indice - 1].completada = true;
        cout << "Tarea completa \n";
    }else{
        cout << "Numero inválido";
    }
}

void mostrarTareas(vector<Tarea>& listaTareas){
    
    if(listaTareas.empty()){
        cout << "La lista no contiene tareas\n";
        return;
    }else{
        cout << "Tareas pendientes: \n";
        
        for(int i = 0; i < listaTareas.size(); i++){
            cout << i + 1 << ". " << listaTareas[i].descripcion 
            << "[ " << (listaTareas[i].completada ? "Completada" : "Pendiente") << " ]" << endl; 
        }
    }

}

//-> agregarTarea()
//-> completarTarea()
//-> mostrarTareas()

int main(){

    vector<Tarea> listaTareas;
    int opcion;

    do{
        mostrarMenu();
        cin >> opcion;

        switch(opcion){
            case 1:
            agregarTarea(listaTareas);
            cout << endl;
            break;

            case 2:
            completarTarea(listaTareas);
            cout << endl;
            break;

            case 3:
            mostrarTareas(listaTareas);
            cout << endl;
            break;
            
        }

    }while(opcion != 4);

    

    return 0;
}