#include "Escribir.h"
#include "Leer.h"

Escribir::Escribir(ofstream& out){
  file = out;
  undo = new ArrayStack();
}

void Ecribir::write(){
  string escribir = "";
  bool fin = true;
  ifstream archivo(file);
  if (archivo.is_open()) {
    while (getline(escribir,archivo)) {
    }
  }
  cout << escribir << '\n';
  int opcion = 2;
    do {
      cout << "Editor de Texto " << '\n'
           << "1. Agregar a archivo" << '\n'
           << "2. Remover Cambio" << '\n'
           << "3. Salir " << '\n'
           << "Ingrese su opcion: ";
      cin >> opcion;
      if (opcion == 1) {
        undo.push_back(escribir)
      } else if (opcion == 2) {

      } else if (opcion == 3) {

      } else {
        cout << "Opcion Invalida" << '\n';
      }
    } while(opcion != 3);
}
