#include <iostream>
#include <cmath>
using namespace std;

int Retorna1(int num, int ordem){
    int potencia = int(pow(10, ordem));
    int algarismo = num - (num % potencia);
    return algarismo;
}

int Retorna2Invertido(int num){
    int resultado = 0;

    while(num > 0){
        int digito = num % 10;      
        resultado = resultado * 10 + digito;  
        num /= 10;                   
    }

    return resultado;
}

int main(){
    int numero;
    cin >> numero;
    
    cout << Retorna2Invertido(numero) << endl; 
}
