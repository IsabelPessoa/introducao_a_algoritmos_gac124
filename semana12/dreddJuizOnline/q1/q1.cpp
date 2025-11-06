#include <iostream>
using namespace std;

void Redimensiona(int* &A, int &tamanho, int valor_a_ser_retirado) {
    int novo_tamanho = tamanho - 1;
    int *intermediario = new int[novo_tamanho];
    int posicao_novo_vetor = 0;

    for (int i = 0; i < tamanho; i++) {
        if (A[i] != valor_a_ser_retirado) {
            intermediario[posicao_novo_vetor] = A[i];
            posicao_novo_vetor++;
        }
    }

    delete[] A;
    A = intermediario;
    tamanho = novo_tamanho;
}

int main() {
    int tamanho = 10;
    int *A = new int[tamanho];

    for (int i = 0; i < tamanho; i++)
        cin >> A[i];

    int i = 0;
    while (i < tamanho) {
        if (A[i] <= 0) {
            int valor = A[i];
            Redimensiona(A, tamanho, valor);
            i = 0; // reinicia a verificação pra não pular nenhum valor
        } else {
            i++;
        }
    }

    for (int i = 0; i < tamanho; i++)
        cout << A[i] << " ";
    cout << endl;

    delete[] A;
    return 0;
}
