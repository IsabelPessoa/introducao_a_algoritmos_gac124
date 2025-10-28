#include <iostream>
#include <fstream>
using namespace std;

int main (){
    int primeiro_mes[5][3];
    int segundo_mes[5][3];
    int num_vendas = 0, soma;
    int total_por_loja [3] = {0, 0, 0};
    int total_por_produto [5] = {0, 0, 0, 0, 0};

    ifstream entrada("vendas.txt");
    ofstream saida("saida.txt");

    for(int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++){
            entrada >> primeiro_mes[i][j];
        }

    for(int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            entrada >> segundo_mes[i][j];

    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            soma = primeiro_mes[i][j] + segundo_mes[i][j];
            total_por_loja[j] += primeiro_mes[i][j] + segundo_mes[i][j];
            total_por_produto[i] += primeiro_mes[i][j] + segundo_mes[i][j];
            saida << soma << "\t";
            if(soma > num_vendas)
                num_vendas = soma;
        }
        saida << endl;
    }

    saida << num_vendas << endl;

    for (int i = 0; i < 3; i++)
        saida << total_por_loja [i] << " ";
    saida << endl;
    
    for (int i = 0; i < 5; i++)
        saida << total_por_produto [i] << " ";
    saida << endl;

    entrada.close();
    saida.close();
    
    return 0;
}