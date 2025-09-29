/*


Faça um subprograma que retorne um tipo de arredondamento especial para um número real positivo recebido como parâmetro. Seu subprograma (do tipo função) deverá arredondar o número recebido para cima (menor número inteiro que seja maior do que o número real recebido), caso a parte inteira do parâmetro de entrada seja um número par. Caso contrário, ou seja, a parte inteira do parâmetro seja ímpar, seu subprograma deverá arredondar o número recebido para baixo (maior número inteiro que seja menor do que o número real recebido). Observação: caso considere que seja necessário, você pode utilizar as funções ceil() e floor() nos momentos que achar apropriado.

Entradas:

    Um número real positivo.

Saídas:

    Um número inteiro positivo.

Exemplo de Entrada:

13.67

Exemplo de Saída:

13

Exemplo de Entrada:

8.29837

Exemplo de Saída:

9

Exemplo de Entrada:

60.0

Exemplo de Saída:

60
*/
#include <iostream>
using namespace std;

double Calcula_parcelas(int n){
    double soma = 0;
    for(int i = 1; i <= n; i++)
        soma += double(i*(i+1))/double(i+3);
    return soma;
}

int main(){
    int N;
    double S;
    cin >> N;

    S = Calcula_parcelas(N);

    cout << S << endl;

    return 0;
}