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

    cout << "Inicial: " << valor_inicial << endl;
    alg0 = Retira_algarismo(valor_inicial, 5); // Centena de Milhar
    valor_inicial -= (alg0 * pow(10, 5));
    cout << "alg0: " << valor_inicial << endl;
    alg1 = Retira_algarismo(valor_inicial, 4); // Dezena de Milhar
    valor_inicial -= (alg1 * pow(10, 4));
    cout << "alg1: " << valor_inicial << endl;
    alg2 = Retira_algarismo(valor_inicial, 3); // Unidade de Milhar
    valor_inicial -= (alg2 * pow(10, 3));
    cout << "alg2: " << valor_inicial << endl;
    alg3 = Retira_algarismo(valor_inicial, 2); // Centena
    valor_inicial -= (alg3 * pow(10, 2));
    cout << "alg3: " << valor_inicial << endl;
    alg4 = Retira_algarismo(valor_inicial, 1); // Dezena
    valor_inicial -= (alg4 * pow(10, 1));
    cout << "alg4: " << valor_inicial << endl;
    alg5 = Retira_algarismo(valor_inicial, 0); // Unidade
    valor_inicial -= (alg5 * pow(10, 0));
    cout << "alg5: " << valor_inicial << endl;

    cout << "Numero: " << alg0 << " " << alg1 << " " << alg2 << " " << alg3 << " " << alg4 << " " << alg5 << endl;

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