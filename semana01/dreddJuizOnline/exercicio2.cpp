/*  Instruções da atividade:
O espaço que um carro precisa para parar completamente depende de vários fatores. 
Apesar disso, algumas vezes é desejável avaliar a velocidade de um carro 
baseando-se no comprimento das marcas de derrapagem na pista.

Em condições comuns, a velocidade é aproximadamente igual a 14.6 vezes a raiz 
quadrada do comprimento da marca de derrapagem. Matematicamente: v = 14.6 c , em 
que v é a velocidade do carro e c é o comprimento da marca de derrapagem.

Faça um programa que recebe o comprimento de uma marca de derrapagem e escreve a 
velocidade aproximada do carro.
---------------------------------------------------------------------------------
Entrada:
    Número real indicando o comprimento da marca de derrapagem.

Saída:
    Número real indicando a velocidade aproximada do carro.
---------------------------------------------------------------------------------
Exemplo de Entrada:
    39.3

Exemplo de Saída:
    91.527
---------------------------------------------------------------------------------
Exemplo de Entrada:
    15

Exemplo de Saída:
    56.546
---------------------------------------------------------------------------------
Comentários:
Fórmula: v = 14.6*sqrt(c)

*/

#include <iostream> 
#include <iomanip>  
#include <math.h>   
using namespace std;

float Calcula_velocidade(float comprimento){
    return (14.6*sqrt(comprimento));
}

int main(){
    float comprimento_de_marca, velocidade;

    std::cin >> comprimento_de_marca;
    velocidade = Calcula_velocidade(comprimento_de_marca);
    
    std::cout << std::fixed << setprecision(3);
    std::cout << velocidade << endl;

    
    return 0;
}