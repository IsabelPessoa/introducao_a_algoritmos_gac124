#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    float salario_base, gratificacao, percentual_imposto;
    cin >> salario_base >> gratificacao >> percentual_imposto;

    float salario_bruto = salario_base + gratificacao;
    float desconto = (percentual_imposto / 100.0) * salario_bruto;
    float salario_liquido = salario_bruto - desconto;

    ofstream arquivo("holerite.txt");

    arquivo << fixed << setprecision(2);
    arquivo << salario_bruto << endl;
    arquivo << desconto << endl;
    arquivo << salario_liquido << endl;

    arquivo.close();

    return 0;
}
