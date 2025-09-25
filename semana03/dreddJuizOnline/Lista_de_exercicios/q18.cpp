#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int valor, primo1, primo2, primo3;
    cin >> valor;

    ifstream entrada("chaves.txt");
    entrada >> primo1 >> primo2 >> primo3;

    ofstream saida("codigo.txt");
    saida << (valor%primo1) << endl;
    saida << (valor%primo2) << endl;
    saida << (valor%primo3) << endl;

    return 0;
}