#include <iostream>
using namespace std;

int main (){
    int tam = 4;
    float matriz[tam][tam];
    int* cidade_partida = new int;
    int* cidade_chegada = new int;
    int* numero_cidades = new int;
    float* custos = new float;

    *custos = 0; 

    for(int i = 0; i < tam; i++)
        for(int j = 0; j< tam; j++)
            cin >> matriz[i][j];

    cin >> *numero_cidades;
    cin >> *cidade_partida;
    
    for(int i = 1; i < *numero_cidades; i++){
        cin >> *cidade_chegada;
        *custos += matriz[*cidade_partida][*cidade_chegada];
        *cidade_partida = *cidade_chegada;
    }
        
    delete cidade_chegada;
    delete cidade_partida;
    delete numero_cidades;

    cout << *custos << endl;

    delete custos;

    return 0;
}