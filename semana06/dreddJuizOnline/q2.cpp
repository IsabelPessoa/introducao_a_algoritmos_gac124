#include <iostream>
using namespace std;

int Continha(int n){
    if(!(n%2))
        return (n/2);
    else
        return ((3*n) + 1);
}

int Imprime_e_retorna_numero(int n){
    cout << Continha(n) << " ";
    return Continha(n);
}

int main(){
    int num, cont = 1;

    cin >> num;
    cout << num << " ";

    while(num != 1){
        num = Imprime_e_retorna_numero(num);
        cont++;
    }

    cout << endl << cont << endl;

    return 0;
}