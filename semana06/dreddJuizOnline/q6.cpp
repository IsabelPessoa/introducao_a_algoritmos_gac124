#include <iostream>
using namespace std;

int SomaDigitos(int num) {
    int soma = 0;
    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}

bool EhHarshad(int num) {
    int soma = SomaDigitos(num);
    return num % soma == 0;
}

int main() {
    int numero;
    cin >> numero;

    int soma = SomaDigitos(numero);
    int resto = numero % soma;

    cout << resto << " ";
    if (EhHarshad(numero))
        cout << "sim" << endl;
    else
        cout << "nao" << endl;

    return 0;
}
