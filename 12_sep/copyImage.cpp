#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream imgRead;
    ofstream imgWrite;

    // Abre os arquivos de entrada e saída
    imgRead.open("./bird2.ppm");
    imgWrite.open("./bird_out.ppm");

    if (!imgRead.is_open()) {
        cerr << "Erro ao abrir o arquivo de entrada!" << endl;
        return 1;
    }

    if (!imgWrite.is_open()) {
        cerr << "Erro ao abrir o arquivo de saída!" << endl;
        return 1;
    }

    // Lê o cabeçalho
    string type, width, height, rgbMax;
    imgRead >> type >> width >> height >> rgbMax;

    // Escreve o cabeçalho no arquivo de saída
    imgWrite << type << endl;
    imgWrite << width << " " << height << endl;
    imgWrite << rgbMax << endl;

    // Lê e copia os dados dos pixels
    
    while (!imgRead.eof())
    {
        /* code */
    }
    

    char pixel;
    while (imgRead.get(pixel)) {
        cout << pixel << endl;
        imgWrite.put(pixel);
        break;
    }

    // Fecha os arquivos
    imgRead.close();
    imgWrite.close();

    cout << "Imagem copiada com sucesso!" << endl;

    return 0;
}
