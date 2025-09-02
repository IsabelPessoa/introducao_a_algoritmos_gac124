#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int Calcula_cem (int num){
    return floor(num/100);
}
int Calcula_cinquenta (int num){
    return floor(num/50);
}

int main() {
    int intR, cedula100, cedula50;

    cin >> intR;
    
    cedula100 = Calcula_cem(intR);
    intR -= (cedula100*100);
    cedula50 = Calcula_cinquenta(intR);
    intR -= (cedula50*50);
    intR /= 10;

    ofstream saida("saque.txt");
    saida << cedula100 << endl;
    saida << cedula50 << endl;
    saida << intR << endl; 

    return 0;
}