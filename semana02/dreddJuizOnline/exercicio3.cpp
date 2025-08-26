/*  Instruções da atividade:

*/

#include <iostream> 
#include <iomanip>  
#include <math.h>   
using namespace std;

int Calcula_numero(int numero){
    return ((numero-(numero%3))/3);
}

int main(){
    int int_positivo;

    std::cin >> int_positivo;
    std::cout << Calcula_numero(int_positivo) << endl;

    return 0;
}