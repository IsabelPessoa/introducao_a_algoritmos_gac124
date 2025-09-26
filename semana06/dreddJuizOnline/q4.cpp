#include <iostream>
#include <iomanip>
using namespace std;

double Calcula_inclinacao(int alt, int base){
    return (double(alt*100)/base);
}

int main(){
    int rampas;
    int alt, base, numAd = 0;
    cin >> rampas;

    double inclinacoes[rampas];

    for(int i = 0; i < rampas; i++){
        cin >> alt >> base;
        inclinacoes[i] = Calcula_inclinacao(alt, base);
        if(inclinacoes[i] <= 8.0){
            numAd++;
        }
    }
    cout << fixed << setprecision(1);

    for(int i = 0; i < rampas; i++){
        cout << inclinacoes[i] << endl;
    }
    cout << numAd << endl;



    return 0;
}