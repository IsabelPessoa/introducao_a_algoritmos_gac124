#include <iostream>
using namespace std;


struct Politicos{
    string nome;
    string partido;
};

struct Operacao_PF{
    string nome;
    Politicos politico;
    double valor_desviado;
};

Politicos Encontra_politico(){
    for(int i = 0; i < numero; i++)
        if(politico[i].nome == nome_politico) return politico[i];
}

double valor_desviado_por_partido(string partido, Operacao_PF operacao[], int numero_de_operacoes){
    double valor_total_desviado = 0;
        for(int i = 0; i < numero_de_operacoes; i++)
            if(operacao[i].politico.partido == partido) valor_desviado_por_partido += operacao[i].valor_desviado;
    return valor_total_desviado;
}

int main(){
    int num_de_entradas, numero_de_politicos;
    string nome_intermediario;

    cin >> numero_de_politicos;
    for(int i = 0; i < num_de_entradas; i++)
        cin >> politico[i].partido >> politico[i].nome;

    cin >> num de entradas;
    Operacao_PF operacao[num_de_entradas]
    for(int i = 0; i < num_de_entradas; i++){
        cin >> operacao[i].nome;
        cin >> nome_intermediario;
        operacao[i].politico = Encontra_politico(politico, numero_de_politicos, nome_intermediario);
    }

    return 0;
}