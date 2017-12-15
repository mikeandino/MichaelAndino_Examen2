#ifndef LEER_H
#define LEER_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Leer{
  public:
    Leer(ifstream&);
    void read();
    friend ostream& operator<<(ostream&,const string);
  private:
    ifstream file;
};

#endif
