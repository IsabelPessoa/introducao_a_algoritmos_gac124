#include <iostream>
#include <fstream>
using namespace std;

double Prestacao(double valorProduto, double prestacoes, double juros){
    double valor = valorProduto + (valorProduto * juros);
    return (valor/prestacoes);
}

int main() {
    double valorProduto;
    
    fstream entrada("valor.txt");
    ofstream saida("opcoes.txt");

    entrada >> valorProduto;
    
    saida << valorProduto * 0.08 << endl;
    saida << Prestacao(valorProduto, 4, 0) << endl;
    saida << Prestacao(valorProduto, 10, 0.1) << endl;

    entrada.close();
    saida.close();

    return 0;
}