#include <iostream>
using namespace std;

int main(){
    int *x, *y, *resultado;

    x = new int;
    y = new int;
    resultado = new int;

    cin >> *x >> *y;

    cout << "\nEndereço de x: " << x << endl;
    cout << "Valor de x: " << *x << endl;
    cout << "Endereço de y:" << y << endl;
    cout << "Valor de y: " << *y << endl;

    *resultado = (*x) * (*y);
    cout << "Endereco Resultado: " << resultado << endl;
    cout << "Resultado: " << *resultado << endl << endl;

    delete x;
    delete y;
    delete resultado;

    cout << "\nEndereço de x: " << x << endl;
    cout << "Valor de x: " << *x << endl;

    return 0;
}