#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


double Calcula_despesa(double debito){
    double comissao_do_banco;
    comissao_do_banco = debito*0.38;
    debito += comissao_do_banco;
    return debito;
}

int main() {
    double salario, debito1, debito2;

    fstream entrada ("entrada.txt");
    entrada >> salario >> debito1 >> debito2;

    salario -= Calcula_despesa(debito1);
    salario -= Calcula_despesa(debito2);

    cout << fixed << setprecision(2);
    cout << salario << endl;

    return 0;
}