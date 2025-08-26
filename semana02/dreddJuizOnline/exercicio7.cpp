//código com erros.
//faça as correções necessárias e submeta para avaliação.

#include <iostream>
using namespace std;
int main (){
    float nota1, nota2, media;
    
    std::cin >> nota1;
    std::cin >> nota2;
    media = ((nota1*2)+(nota2*3))/5;
    
    std::cout<<media;
    return 0;
}