#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int Calcula_centena (int num){
    return floor(num/100);
}
int Calcula_dezena (int num){
    return floor(num/10);
}

int main() {
    int num, centena, dezena;

    cin >> num;
    
    centena = Calcula_centena(num);
    num -= (100*Calcula_centena(num));
    dezena = Calcula_dezena(num);
    num -= (10*Calcula_dezena(num));

    ofstream saida("saida.txt");   

    cout << (centena + dezena + num) << endl;
    saida << (centena * dezena * num);

    saida.close();
    

    return 0;
}