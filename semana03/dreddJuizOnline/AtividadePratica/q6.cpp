#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    double v1, v2, v3, v4, v5, v6, v7, v8;
    
    fstream entrada ("dados.txt");
    entrada >> v1 >> v2 >> v3 >> v4 >> v5 >> v6 >> v7 >> v8;
    entrada.close();

    ofstream saida ("media.txt");
    saida << ((v1+v2+v3+v4+v5+v6+v7+v8)/8) << setprecision(3) << endl;

    return 0;
}