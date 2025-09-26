#include <iostream>
#include <fstream>
using namespace std;

bool D3(int n){
    if(!(n%3))
        return false;
    else
        return true;
}

int main(){
    int num;

    string nomeArquivo;
    cin >> nomeArquivo;
    ifstream entrada(nomeArquivo);
    ofstream saida("saida.txt");

    while(entrada >> num){
        if(D3(num))
            saida << num << " ";
    }

    entrada.close();
    saida.close();

    return 0;
}