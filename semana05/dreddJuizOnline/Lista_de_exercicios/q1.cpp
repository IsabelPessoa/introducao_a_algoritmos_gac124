/*


Faça um programa que leia uma sequência números positivos ou nulos em um arquivo chamado entrada.txt. Após isso, imprima: o menor valor, segundo menor valor, o maior valor e o segundo maior valor. Assuma que a sequência tem pelo menos dois números e que não há elementos repetidos.

Entradas (arquivo entrada.txt):

    int n - Números que o usuário irá digitar.

Saídas:

    Menor valor digitado (int).
    Segundo menor valor digitado (int).
    Maior valor digitado (int).
    Segundo maior valor digitado (int).


Exemplos de Entradas e Saídas:

Entradas (arquivo entrada.txt):
3
2
1
4
5
6
7

Saídas:
1
2
7
6
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num, numMaior, numMenor, segMaior, segMenor;

    ifstream arquivo("entrada.txt");
    arquivo >> num;
    
    numMaior = num;
    numMenor = num;
    segMaior = num;
    segMenor = num;

    while(arquivo >> num){
        if(num > numMaior){
            segMaior = numMaior;
            numMaior = num;
        }
        else if(num < numMenor){
            segMenor = numMenor;
            numMenor = num;
        }
    }
    
    if(segMaior == segMenor){
        segMaior = numMaior;
        segMenor = numMenor;
    }


    cout << numMenor << endl;
    cout << segMenor << endl;
    cout << numMaior << endl;
    cout << segMaior << endl;

    return 0;
}