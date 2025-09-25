#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int Calcula_lata(int m){
    return ceil((m/3)/18.0);
}

double Calcula_tinta(int m, double preco){
    return (Calcula_lata(m) * preco);
}

int main() {
    string nomeArquivo;
    double valorLata;
    int metros2; 
    
    fstream entrada("entrada.txt");
    entrada >> metros2 >> valorLata;

    ofstream saida("saida.txt");
    saida << Calcula_lata(metros2) << endl << Calcula_tinta(metros2, valorLata) << endl;

    return 0;
}