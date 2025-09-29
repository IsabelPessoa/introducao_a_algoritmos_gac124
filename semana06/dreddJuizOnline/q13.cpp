#include <iostream>
using namespace std;

int Calcula_tempo(int h1, int h2, int m1, int m2){
    int minutos0 = h1 * 60 + m1;
    int minutosf = h2 * 60 + m2;
    int resultado = minutosf - minutos0;
    
    if (resultado <= 0)
        resultado += 24 * 60;
        
    return resultado;
}

int main(){
    int h1, m1, h2, m2;
    
    while (true){
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;
        cout << Calcula_tempo(h1, h2, m1, m2) << endl;
    }
    
    return 0;
}
