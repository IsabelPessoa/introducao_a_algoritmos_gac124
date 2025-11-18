#include <iostream>
using namespace std;

int Busca_maior(int* numeros, int tamanho, int pos_inicial){
    int maior = numeros[pos_inicial];
    for(int i = pos_inicial+1; i <  tamanho; i++)
        if(numeros[i] > maior) maior = numeros[i];
    
    return maior;
}
int Busca_posicao_maior(int* numeros, int tamanho, int pos_inicial){
    int maior = numeros[pos_inicial], posicao = 0;
    
    if(tamanho > 3)
        for(int i = pos_inicial+1; i < tamanho; i++)
            if(numeros[i] > maior) {
                maior = numeros[i];
                posicao = i;
            }

    if(tamanho < 3)
        if(numeros[2] > maior) {
            maior = numeros[i];
            posicao = i;
        }
    
    return posicao;
}

int main(){
    int tamanho;
    int maior, posicao_maior;
    int auxiliar;
    cin >> tamanho;

    int* numeros = new int[tamanho];

    for(int i = 0; i < tamanho; i++){
        cin >> numeros[i];
    }

    for(int i = 0; i < tamanho-1; i++){
        maior = Busca_maior(numeros, tamanho, i);
        posicao_maior = Busca_posicao_maior(numeros, tamanho, i);

        cout << endl << "Numero maior: " << maior << endl;
        cout << "Posicão do maior: " << posicao_maior << endl;
        
        if(posicao_maior != i){
            cout << "Trocar posicao " << i << " por posição " << posicao_maior << endl;
            numeros[posicao_maior] = numeros[i];
            numeros[i] = maior;
        }

        cout << "Novo vetor: ";

        for(int j = 0; j < tamanho; j++)
            cout << numeros[j] << " ";
        cout << endl;

        cout << "------------------------------------------------------";
    }

    delete[] numeros;

    return 0;
}