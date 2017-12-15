#include <iostream>
#include <string>
#include <fstream>
#include "ArrayStack.h"
#include "Escribir.h"
#include "Leer.h"
int main();

int main() {
  int  opcion;
  do {
    cout << "Editor de Texto " << '\n'
         << "1. Crear Archivo " << '\n'
         << "2. Editar Archivo" << '\n'
         << "3. Salir " << '\n'
         << "Ingrese su opcion: ";
    cin >> opcion;
    if (opcion == 1) {
      cout << "Ingrese el nombre del archivo: " << '\n';
      string nombre;
      cin>>nombre;
      nombre += ".txt";
    } else if (opcion == 2) {
      /* code */
    } else if (opcion == 3) {
      /* code */
    } else {
      /* code */
    }
  } while(opcion != 3);
  return 0;
}
