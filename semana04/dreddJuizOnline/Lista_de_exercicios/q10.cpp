#include <iostream>
using namespace std;

int main(){
    char monstros;
    int numHospedes, numDias, centenas, dezenas, unidades, quarto;

    cin >> monstros >> numHospedes >> numDias;

    
    switch(monstros){
        case 'z':
            centenas = 1;
        break;
        case 'm':
            centenas = 1;
        break;
        case 'l':
            centenas = 2;
        break;
        case 'd':
            centenas = 2;
        break;
        case 'h':
            centenas = 3;
        break;
        case 's':
            centenas = 3;
        break;
        case 'v':
            centenas = 4;
        break;
        case 'f':
            centenas = 4;
        break;
    }
    switch(numHospedes){
        case 1:
            dezenas = 1;
        break;
        case 2:
            dezenas = 2;
        break;
        default:
            dezenas = 3;
    }

    switch(numDias){
        case 1:
            unidades = 1;
        break;
        case 2:
            unidades = 1;
        break;
        case 3:
            unidades = 2;
        break;
        case 4:
            unidades = 2;
        break;
        case 5:
            unidades = 3;
        break;
        case 6:
            unidades = 3;
        break;
        default:
            unidades = 4;
    }
    
    quarto = (centenas*100) + (dezenas*10) + (unidades);
    cout << quarto << endl;

    return 0;
}