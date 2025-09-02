#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int Calcula(int valor, int nota){
    return floor(valor/nota);
}

int main() {

    int valorCliente, valorCompra, cliente;
    fstream entrada("entrada.txt");
    entrada >> valorCliente >> valorCompra;

    cliente = valorCliente-valorCompra;

    fstream saida("saida.txt");

    saida << Calcula(cliente, 20) << " " << endl;
    cliente -= (Calcula(cliente, 20))*20;

    saida << Calcula(cliente, 10) << " " << endl;
    cliente -= (Calcula(cliente, 10))*10;
    
    saida << Calcula(cliente, 5) << " " << endl;
    cliente -= (Calcula(cliente, 5))*5;

    saida << Calcula(cliente, 2) << " " << endl;
    cliente -= (Calcula(cliente, 2))*2;

    saida << cliente << endl;

    return 0;
}