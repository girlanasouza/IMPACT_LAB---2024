#include <iostream>
#include <fstream>

using namespace std;


int main() {
    // task 1: ppm header
    // task 2: ppm body

    cout << "impact\n";

    // read from the file
    ofstream imagein;
    ifstream imageout;
    imagein.open("./teste3.ppm");
    
    // task 1: header
    if (imagein.is_open()) {
        cout << "Header\n";
        imagein << "P3" << endl;      
        imagein << "3 2" << endl;
        imagein << "255" << endl;
    } else {
      cout<<"nao consegui abrir o arquivo\n";
    }
    
    // task 3: body
    imagein << "255 0 0" << endl;
    imagein << "0 255 0" << endl;
    imagein << "0 0 255" << endl;
    imagein << "255 255 0" << endl;
    imagein << "255 255 255" << endl;
    imagein << "0 0 0" << endl;
    imagein.close();

    return 0;
}

