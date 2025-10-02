#include <iostream>
using namespace std;

int maior (int *entrada, int tam){
    int M = entrada[0]; //(Maior = entrada[0])

    for(int i = 1; i< tam; i++)
        if(entrada[i] > M)
            M = entrada[i];

    return M;
}

void menor(int input[], int tam, int &M){
    M = input[0];

    for(int i = 1; i < tam; i++)
        if(input[i] < M)
            M = inut[i];

}

int main(){
    int tamanho;
    cin >> tamanho;

    int *vetor = new int[tamanho];
    int Menor;

    for(int i = 0; i < tamanho; i++)
        cin >> vetor[i];

    cout << maior(vetor,tamanho) << endl; 
    menor(vetor, tamanho)

    for(int i = 0; i < tamanho; i++)
        cout << vetor[i] << endl;

    return 0;
}