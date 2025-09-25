#include <iostream>
#include <cmath>
using namespace std;
int tam_vetor = 10;

int main(){
    int cont = 1;
    int vetor[tam_vetor];
    for(int i = 0; i < tam_vetor; i++)
        cin >> vetor[i];

    int i = 0;
    while(i < tam_vetor){
        while(vetor[i] == vetor[i+1]){
            cont++;
            i++;
        }

        if(!(cont%2) and cont > 1)
            cout << (vetor[i]*cont) << " ";
        else
            cout << pow(vetor[i], cont) << " ";

        cont = 1;
        i++;
    }

    return 0;
}