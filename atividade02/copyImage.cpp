/*
    Turma 04 Impact Lab 2024
    Aluna: Girlana Souza 
*/

#include <fstream>

using namespace std;

int main (){ 
    // imagem de entrada
    ifstream imgIn;
    imgIn.open("images/apollo.ppm");

    // imagem de saída
    ofstream imgOut;
    imgOut.open("images/New_Apollo.ppm");

    // copiando memória
    //imgIn >> memory>> imgOut

    // copiando o header da imagem
    string type = "", width = "", height = "", RGBMax = "";


    // Copy Memory
    //imgIn >> memory
    imgIn >> type; 
    imgIn >> width;
    imgIn >> height;
    imgIn >> RGBMax;

    // Copy Memory to new Image
    //memory>> imgOut
    imgOut << type<<endl;
    imgOut << width<<" "<< height<<endl;
    imgOut << RGBMax<<endl;

    // Image Body
    string red = "", green = "", blue = "";

    while (!imgIn.eof()) { 
        // ler os valores da imagem de entrada
        imgIn >> red;
        imgIn >> green;
        imgIn >> blue;

        // escrever/copiar os valores rgb para imagem de entrada
        imgOut << red << " " << green << " " << blue << " "<< endl;
    }

    //  Close Images
    imgIn.close();
    imgOut.close();

    return 0;

}