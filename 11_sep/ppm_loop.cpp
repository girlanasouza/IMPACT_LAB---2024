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
    imagein.open("./teste_loop7.ppm");
    
    // task 1: header
    if (imagein.is_open()) {
        cout << "Header\n";
        imagein << "P3" << endl;    
        // size  
        imagein << "250 250" << endl;
        imagein << "255" << endl;
    } else {
      cout<<"nao consegui abrir o arquivo\n";
    }
    
    for(int i=0;i<250;i++){
      
      for(int j=0; j<250; j++) {
        // imagein << j <<" " << j << " " << j << endl;
        // if (j>=125) imagein << "255 255 255" << endl;
        // else imagein << "0 0 0" << endl;
        if (i<=125 && j<=125) imagein << "255 255 255" << endl;
        else if (i>125 && j>125) imagein << "0 0 0" << endl;
        else if (i>125 && j<=125) imagein << "255 0 0" << endl;
        else if (i<=125 && j>125) imagein << "0 0 255" << endl;
        else imagein << "0 0 0" << endl;
      }
      imagein << endl;
    }
    imagein.close();

    return 0;
}

