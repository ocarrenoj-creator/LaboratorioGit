#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream archivo("input/archivoentrada.txt.txt");

    string linea;

    while(getline(archivo, linea)){
        cout << linea << endl;
    }

    archivo.close();

    return 0;
}