#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double Calcula_volume(double largura, double altura, double comprimento){
    return (largura*altura*comprimento);
}

double Calcula_peso(double v1, double v2, double v3, double ppcm){
    return Calcula_volume(v1, v2, v3)*ppcm;
}

int main() {
    double v1, v2, v3, pesoPerCm; 
    
    fstream entrada("entrada.txt");
    entrada >> v1 >> v2 >> v3 >> pesoPerCm;

    cout << fixed << setprecision(1);
    cout << Calcula_peso(v1, v2, v3, pesoPerCm) << endl;

    return 0;
}