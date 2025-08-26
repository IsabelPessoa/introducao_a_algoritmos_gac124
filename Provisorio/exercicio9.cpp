//código com erros.
//faça as correções necessárias e submeta para avaliação.

#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    float largura,altura,area,litros;
	
    cin >> largura >> altura;
	area = (largura*altura)*3;
	litros = area/2;

    std::cout << std::fixed << setprecision(2);
	cout << litros << " Litros" << endl;

    std::cin.get(); 
    return 0;
}