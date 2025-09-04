#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double velocidade1, velocidade2, dist, tempo;

    cin >> velocidade1 >> velocidade2 >> dist;
    tempo = (dist)/(velocidade1+velocidade2);

    cout << fixed << setprecision(2);

    if(tempo < 11)
        cout << "COLISAO" << endl;
    else
        cout << tempo << endl;

    return 0;
}