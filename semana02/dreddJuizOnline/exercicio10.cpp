//código com erros.
//faça as correções necessárias e submeta para avaliação.

#include <iostream>
#include <fstream>

using namespace std;

int main (){
    int dias;
	float valorLiquido;

    ifstream entrada("entrada");
    ofstream saida("saida");

	entrada >> dias;

    valorLiquido = (dias * 60) * 0.92; 
    saida << "R$ " << valorLiquido; 
    saida.close();

    return 0;
} 