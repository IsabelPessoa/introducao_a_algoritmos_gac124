#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double Calcula_Nota(int nota, int peso){
    return (nota*peso);
}

double Calcula_media(double nota1, double nota2, double nota3, int somapesos){
    return ((nota1+nota2+nota3)/somapesos);
}

int main() {
    int nota1, peso1, nota2, peso2, nota3, peso3;
    
    fstream entrada ("notas.txt");
    entrada >> nota1 >> peso1;
    entrada >> nota2 >> peso2;
    entrada >> nota3 >> peso3;
    entrada.close();

    ofstream saida("final.txt");
    saida << fixed << setprecision(2);
    saida << Calcula_media(Calcula_Nota(nota1, peso1), Calcula_Nota(nota2, peso2), Calcula_Nota(nota3, peso3), (peso1+peso2+peso3)) << endl;
    saida.close();

    return 0;
}