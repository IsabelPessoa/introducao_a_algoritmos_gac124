#include <iostream>
using namespace std;
int tam = 10;

void Preenche_vetor2(int vetor1[], int vetor2[]){
    int j = 0;
    for(int i = 0; i < tam ; i++){
        if(vetor1[i]%2 == 0 and vetor1[i] != 0){
            vetor2[j] = vetor1[i];
            j++;
        }
    }
}

void Preenche_vetor3(int vetor1[], int vetor2[]){
    int j = 0;
    for(int i = 0; i < tam ; i++){
        if(vetor1[i]%3 == 0 and vetor1[i] != 0){
            vetor2[j] = vetor1[i];
            j++;
        }
    }
}

int Encontra_maior(int vetor[], int tamanho){
    int maior = vetor[0];

    for(int i = 1; i < tamanho; i++)
        if(vetor[i] > maior)
            maior = vetor[i];

    return maior;
}

int main(){
    int vetor[tam], tam2 = 0, tam3 = 0;

    for(int i = 0; i < tam ; i++){
        cin >> vetor[i];
        if(vetor[i]%2 == 0 and vetor[i] != 0)
            tam2++;
        if(vetor[i]%3 == 0 and vetor[i] != 0)
            tam3++;
    }

    if(tam2 > 0){
        int vetor2[tam2];
        Preenche_vetor2(vetor, vetor2);
        
        for (int i = 0; i < tam2; i++){
            cout << vetor2[i] << " ";
        }
        cout << endl << Encontra_maior(vetor2, tam2);
    
    }
    if(tam3 > 0){
        int vetor3[tam3];
        Preenche_vetor3(vetor, vetor3);
        
        for (int i = 0; i < tam3; i++){
            cout << vetor3[i] << " ";
        }
        cout << endl << Encontra_maior(vetor3, tam3);
    }
    

    return 0;
}