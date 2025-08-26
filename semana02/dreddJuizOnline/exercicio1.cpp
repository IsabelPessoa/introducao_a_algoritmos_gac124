/*  Instruções da atividade:

Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
• O número digitado ao quadrado;
• O número digitado ao cubo;
• A raiz quadrada do número digitado;
------------------------------------------------------------------------------------
Entradas:

    Número real positivo (float).

Saídas:

    Número elevado ao quadrado.
    Número elevado ao cubo.
    Raiz quadrada do número.
------------------------------------------------------------------------------------
Exemplo de Entrada:
    16

Exemplo de Saída:
    256
    4096
    4

*/

#include <iostream> // Biblioteca basica de C++
#include <math.h>   // Biblioteca com operações matematicas simplificadas em funções
using namespace std;

float Calcula_ao_quadrado(float numero){
    return (float) pow (numero, 2.0);
}
float Calcula_ao_cubo(float numero){
    return (float) pow (numero, 3.0);
}
float Calcula_raiz_quadrada(float numero){
    return (float) sqrt(numero);
}

int main(){
    //  Criação das variáveis:
    float numero_positivo, quadrado_calculado, cubo_calculado, raiz_calculada;

    // Entrada
    std::cin >> numero_positivo;

    //  Cálculo das saidas esperadas
    quadrado_calculado = Calcula_ao_quadrado(numero_positivo);
    cubo_calculado = Calcula_ao_cubo(numero_positivo);
    raiz_calculada = Calcula_raiz_quadrada(numero_positivo);

    //  Saida
    cout << quadrado_calculado << endl;
    cout << cubo_calculado << endl;
    cout << raiz_calculada << endl;
    
    return 0;
}