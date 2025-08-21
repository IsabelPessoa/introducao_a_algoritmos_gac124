/*  Instruções da atividade:

*/

#include <iostream> 
#include <iomanip>  
#include <math.h>   
using namespace std;

float Calcula_area_retangulo(float largura, float comprimento){
    return (largura*comprimento);
}

int main(){
    float largura, comprimento;

    std::cin >> largura;
    std::cin >> comprimento;

    std::cout << Calcula_area_retangulo(largura, comprimento) << endl;
    
    return 0;
}