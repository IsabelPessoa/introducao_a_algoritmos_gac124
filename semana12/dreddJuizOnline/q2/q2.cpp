#include <iostream>
using namespace std;

void Redimensiona(char* &A, int &tamanho, int posicao_retirar) {
    int novo_tamanho = tamanho - 1;
    char *intermediario = new char[novo_tamanho];
    int pos_novo = 0;

    for (int i = 0; i < tamanho; i++) {
        if (i != posicao_retirar) {
            intermediario[pos_novo] = A[i];
            pos_novo++;
        }
    }

    delete[] A;
    A = intermediario;
    tamanho = novo_tamanho;
}

bool CaracterPresente(char *B, int tamanhoB, char valor) {
    for (int i = 0; i < tamanhoB; i++) {
        if (B[i] == valor)
            return true;
    }
    return false;
}

bool VetoresIguais(char *A, int tamanhoA, char *B, int tamanhoB) {
    if (tamanhoA != tamanhoB)
        return false;
    for (int i = 0; i < tamanhoA; i++) {
        if (A[i] != B[i])
            return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n;
    char *A = new char[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    cin >> m;
    char *B = new char[m];
    for (int i = 0; i < m; i++)
        cin >> B[i];

    if (VetoresIguais(A, n, B, m)) {
        cout << "Vetores iguais";
    } else {
        int i = 0;
        while (i < n) {
            if (CaracterPresente(B, m, A[i])) {
                Redimensiona(A, n, i);
                i = 0; // reinicia verificação após redimensionamento
            } else {
                i++;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << A[i];
            if (i < n - 1)
                cout << " ";
        }
    }
    cout << endl;

    delete[] A;
    delete[] B;

    return 0;
}
