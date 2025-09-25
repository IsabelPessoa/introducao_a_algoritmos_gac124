#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int Converte_Grau(double decimal, int ordem){
    return floor(decimal*ordem);
}

int main() {
    double decimal;
    int grau, min, seg;

    cin >> decimal;

    grau = Converte_Grau(decimal, 1);
    decimal -= grau;
    min = Converte_Grau(decimal, 60);
    decimal *= 60;
    decimal -= min;
    seg = Converte_Grau(decimal, 60);

    ofstream saida("coordenadas.txt");
    saida << grau << endl << min << endl << seg << endl;

    return 0;
}