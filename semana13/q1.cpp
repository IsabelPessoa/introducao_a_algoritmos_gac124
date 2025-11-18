#include <iostream>
using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;

    int* numeros = new int[tamanho];

    for(int i = 0; i < tamanho; i++)
        cin >> numeros[i];

    for(int i = tamanho - 2; i >= 0; i--){
        int auxiliar = numeros[i];
        int j = i+1;

        while(j < tamanho && numeros[j] > auxiliar){
            numeros[j - 1] = numeros[j];
            j++;
        }
        numeros[j-1] = auxiliar;

        for(int k = 0; k < tamanho; k++){
            cout << numeros[k];
            if(k < tamanho-1) cout << " ";
        }
        cout << endl;
    }

    delete[] numeros;

    return 0;
}