#include <iostream>
using namespace std;

double Calcula_parcelas(int n){
    double soma = 0;
    for(int i = 1; i <= n; i++)
        soma += double(i*(i+1))/double(i+3);
    return soma;
}

int main(){
    int N;
    double S;
    cin >> N;

    S = Calcula_parcelas(N);

    cout << S << endl;

    return 0;
}