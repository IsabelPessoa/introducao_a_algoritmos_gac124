#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

float Converte_moeda(float valor_inicial, float peso){
    return (valor_inicial/peso);
}

int main (){
    float reais;

    ifstream entrada("salario.txt");
    cin >> reais;
    entrada.close();

    ofstream saida("salario.txt");
    
    saida << fixed << setprecision(2);
    saida << Converte_moeda(reais, 2.13) << endl;
    saida << Converte_moeda(reais, 2.84) << endl;
    saida << Converte_moeda(reais, 3.34) << endl;
    saida.close();

    return 0;
}
