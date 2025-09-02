#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

float Calcula_dist(float p1x, float p1y, float p2x, float p2y){
    return (sqrt(pow((p2x - p1x), 2) + pow((p2y - p1y), 2)));
}

int main() {
    float ponto1x, ponto1y, ponto2x, ponto2y;
    
    fstream entrada("entrada.txt");
    entrada >> ponto1x;
    entrada >> ponto1y;
    entrada >> ponto2x;
    entrada >> ponto2y;

    cout << Calcula_dist(ponto1x, ponto1y, ponto2x, ponto2y) << endl;

    return 0;
}