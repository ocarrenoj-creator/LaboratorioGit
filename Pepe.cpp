#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream archivo("input/archivoentrada.txt");


if (archivoentrada.is_open()){
	cout << "Archivo Abierto" << endl;
	
    string linea;	
    while(getline(archivo, linea)){
        cout << linea << endl;
    }}

    archivoentrada.close();

    return 0;
}
