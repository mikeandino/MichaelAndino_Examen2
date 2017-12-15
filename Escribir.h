#ifndef ESCRIBIR_H
#define ESCRIBIR_H
#include <iostream>
#include <string>
#include <fstream>
#include <fstream>
#include "ArrayStack.h"

using namespace std;

class Escribir{
  public:
    Escribir(ofstream&);
    void write();
    friend istream& operator>>(istream&, string);
  private:
    ofstream file;
    ArrayStack undo;
  };
#endif
