#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int Horas_para_minutos(int horas){
    return (horas * 60);
}

int Minutos_para_segundos(int minutos){
    return (minutos * 60);
}

int main() {
    int horas, minutos; 
    
    cin >> horas;
    cin >> minutos;
    
    ofstream saida("saida.txt");

    saida << Horas_para_minutos(horas) << endl;
    saida << (Horas_para_minutos(horas) + minutos) << endl;
    saida << (Minutos_para_segundos(Horas_para_minutos(horas) + minutos)) << endl;

    return 0;
}