#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
    unsigned i;
    string nome_do_arquivo, linha;

    getline(cin, nome_do_arquivo);

    ifstream entrada(nome_do_arquivo);
    ofstream saida("cifrado.txt");

    if (!entrada.is_open()) {
        cerr << "Erro ao abrir o arquivo: " << nome_do_arquivo << endl;
        return 1;
    }
    else{
        while(getline(entrada, linha)){
            i = 0;
            while(linha.length() > i){
                if(linha[i] >= 'A' and linha[i] <= 'Z'){
                    if(linha[i] <= 'M')
                        saida << char('M' - (linha[i] - 'N'));
                    else
                        saida << char('Z' - (linha[i] - 'A'));
                }
                else
                    saida << linha[i];
                i++;
            }
            saida << endl;
        }
    }

    entrada.close();
    saida.close();

    return 0;
}