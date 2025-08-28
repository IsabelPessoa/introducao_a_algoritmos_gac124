#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string texto, nomeArquivo;

    cin >> nomeArquivo;
    cin >> texto;

    ofstream saida(nomeArquivo);
    
    saida << texto << endl;

    

    return 0;
}