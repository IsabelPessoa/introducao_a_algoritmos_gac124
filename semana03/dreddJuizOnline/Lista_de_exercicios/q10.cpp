#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int Calcula_degrau(double m, double c){
    //  converte metros em centimetros
    m *= 100;
    return ceil(m/c);
}

int main() {
    double altCm, altM;
    
    fstream entrada("entrada.txt");
    entrada >> altCm >> altM;
    entrada.close();
    
    ofstream saida("degraus.txt");
    saida << Calcula_degrau(altM, altCm) << endl;
    saida.close();

    return 0;
}