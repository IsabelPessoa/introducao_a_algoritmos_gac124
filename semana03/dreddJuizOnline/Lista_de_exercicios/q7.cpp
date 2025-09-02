#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nomeArquivo1, nomeArquivo2, nomeArquivo3, texto1, texto2;

    cin >> nomeArquivo1;
    cin >> nomeArquivo2;
    cin >> nomeArquivo3;

    fstream entrada1(nomeArquivo1), entrada2(nomeArquivo2);
    entrada1 >> texto1;
    entrada2 >> texto2;
    entrada1.close();
    entrada2.close();

    ofstream saida(nomeArquivo3);
    saida << (texto1 + " " + texto2) << endl;
    saida.close();

    return 0;
}