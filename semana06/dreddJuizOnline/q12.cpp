#include <iostream>
using namespace std;

int Fatorial(int n){
    int produto = 1;
    for(int i = n; i > 0; i--){
        produto *= i;
    }
    return produto;
}

double Numero_euler(int n){
    double euler = 0;
    for(int i = 0; i < n; i++)
        euler += 1/double(Fatorial(i));
    return euler;
}

int main(){
    int n;
    cin >> n;

    cout << Numero_euler(n) << endl;

    return 0;
}