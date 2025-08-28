#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double Calcula_area(double dim1, double dim2){
    return (dim1*dim2);
}
double Calcula_potencia(double area, double p){
    return (area*p);
}

int main() {
    double dim1, dim2, powM2 = 18;

    cin >> dim1;
    cin >> dim2;
    
    ofstream saida("potencia.txt");
    saida << fixed << setprecision(1);
    saida << Calcula_area(dim1, dim2) << "m2" << endl;
    saida << Calcula_potencia(Calcula_area(dim1, dim2), powM2) << "W" << endl;

    return 0;
}