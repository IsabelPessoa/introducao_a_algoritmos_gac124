/*  Instruções da atividade:

*/

#include <iostream> 
#include <iomanip>  
#include <math.h>   
using namespace std;

int Calcula_quilometros(int Mil){
    return int(1.61*Mil);
}

int main(){
    int milhas;
    std::cin >> milhas;

    std::cout << Calcula_quilometros(milhas) << endl;
    
    return 0;
}