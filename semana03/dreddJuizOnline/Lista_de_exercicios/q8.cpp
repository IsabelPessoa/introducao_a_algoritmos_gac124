#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int Calcula_convite(double cE, double pC){
    return ceil(cE/pC);
}

int main() {
    double custoEsp, precoConv;

    fstream entrada("teatro.txt");
    entrada >> custoEsp >> precoConv; 
    entrada.close();

    ofstream saida("convite.txt");
    cout << Calcula_convite(custoEsp, precoConv) << endl;
    saida << Calcula_convite(custoEsp, precoConv);
    saida.close();

    return 0;
}