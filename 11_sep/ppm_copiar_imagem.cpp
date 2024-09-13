#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
    // task 1: ppm header
    // task 2: ppm body

    cout << "reading...\n";

    // read from the file
    ifstream imageIn;
    ofstream imageOut;
    
    string p3, red, green, blue;
    
    int w, h, s;

    imageIn.open("./teste_loop7.ppm");

    if (imageIn.is_open()) {
      imageIn >> p3;
      imageIn >> w >> h;
      imageIn >> s;
      cout << p3 << endl << w << endl << h << endl << s << endl;
    } else {
      cout << "erro ao abrir a imagem\n";
    }

  for(int i=0;i<250;i++){
      for(int j=0; j<250; j++) {
        imageIn >> red >> green >> blue;
    
        cout << "r," <<  red << endl << "g,"<<green << endl << "b,"<< blue << endl;

        // if (i<=125 && j<=125) imageOut << "255 255 255" << endl;
        // else if (i>125 && j>125) imageOut << "0 0 0" << endl;
        // else if (i>125 && j<=125) imageOut << "255 0 0" << endl;
        // else if (i<=125 && j>125) imageOut << "0 0 255" << endl;
        // else imageOut << "0 0 0" << endl;
      }
      imageOut << endl;
    }


    imageOut.open("./teste_loop7_1.ppm");
    
    // task 1: header
    if (imageOut.is_open()) {
        cout << "Header\n";
        imageOut << "P3" << endl;    
        // size  
        imageOut << "250 250" << endl;
        imageOut << "255" << endl;
    } else {
      cout<<"nao consegui abrir o arquivo\n";
    }
    
    for(int i=0;i<250;i++){
      
      for(int j=0; j<250; j++) {
        // imageOut << j <<" " << j << " " << j << endl;
        // if (j>=125) imageOut << "255 255 255" << endl;
        // else imageOut << "0 0 0" << endl;
        if (i<=125 && j<=125) imageOut << "255 255 255" << endl;
        else if (i>125 && j>125) imageOut << "0 0 0" << endl;
        else if (i>125 && j<=125) imageOut << "255 0 0" << endl;
        else if (i<=125 && j>125) imageOut << "0 0 255" << endl;
        else imageOut << "0 0 0" << endl;
      }
      imageOut << endl;
    }
    imageOut.close();

    return 0;
}

