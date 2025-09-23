#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int Encontra (int tempo, int parametro){
    return floor(tempo/parametro);
}

float Encontra_seg (int tempo, int parametro){
    return (tempo/float(parametro));
}


int main() {
    string nomeArquivo;
    int minutos, horas, tempo;
    double segundos;
    
    ifstream entrada("tempo.txt");
    ofstream saida("horario.txt");
    
    entrada >> tempo;


    horas = Encontra(tempo, 3600000);
    tempo -= horas*3600000;
    minutos = Encontra(tempo, 60000);
    tempo -= minutos*60000;
    segundos = Encontra_seg(tempo, 1000);
    
    saida << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}