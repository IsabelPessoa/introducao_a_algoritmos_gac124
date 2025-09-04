#include <iostream>
#include <iomanip>
using namespace std;

double Calcula_desconto(double total, double desconto){
    return (total - (total*desconto));
}

int main(){
    int op1, op2, op3, op4, sal, farinha, carvao;
    double soma;

    cin >> op1 >> op2 >> op3 >> op4 >> sal >> farinha >> carvao;
    soma = (op1*28.9) + (op2*19.9) + (op3*7.95) + (op4*2.99) + (sal*1.5) + (farinha*1.85) + (carvao*8.7);

    cout << fixed << setprecision(2);
    if(soma <= 200)
        cout << soma << endl << (soma*0.05) << endl << Calcula_desconto(soma, 0.05) << endl;
    else
        cout << soma << endl << (soma*0.1) << endl << Calcula_desconto(soma, 0.1) << endl;    

    return 0;
}