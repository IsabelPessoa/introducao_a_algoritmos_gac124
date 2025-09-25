#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int Retira_algarismo(int num, int ordem){
    return floor(num/pow(10, ordem));
}
int Diminui_algarismo(int num, int ordem){
    return floor(num*pow(10, ordem));
}

int Calcula_M(int num){
    int valor, alg0, alg1, alg2, alg3, alg4, alg5, valor_inicial = num;

    alg0 = Retira_algarismo(num, 0); // Centena de Milhar
    valor_inicial -= Diminui_algarismo(num, 0);
    alg1 = Retira_algarismo(num, 1); // Dezena de Milhar
    valor_inicial -= Diminui_algarismo(num, 1);
    alg2 = Retira_algarismo(num, 2); // Unidade de Milhar
    valor_inicial -= Diminui_algarismo(num, 2);
    alg3 = Retira_algarismo(num, 3); // Centena
    valor_inicial -= Diminui_algarismo(num, 3);
    alg4 = Retira_algarismo(num, 4); // Dezena
    valor_inicial -= Diminui_algarismo(num, 4);
    alg5 = Retira_algarismo(num, 5); // Unidade
    valor_inicial -= Diminui_algarismo(num, 5);

    cout << "Numero: " << alg5 << alg4 << alg3 << alg2 << alg1 << alg0 << endl;

    valor = int(alg0/alg1)*1 + int(alg1/alg2)*10 + int(alg2/alg3)*100 +  int(alg3/alg4)*1000 + int(alg4/alg5)*10000;

    return valor;
}



int main() {
    int n, m;
    
    ifstream entrada("entrada.txt");
    entrada >> n;
    
    m = Calcula_M(n);

    ofstream saida("saida.txt");
    saida << m;

    return 0;
}