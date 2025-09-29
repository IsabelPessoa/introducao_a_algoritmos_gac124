#include <iostream>
using namespace std;

void Imprime_romano(int n){
    int unidades = n % 10;
    int dezenas = n - unidades;

    while (dezenas > 0){
        if (dezenas >= 50){
            cout << "L";
            dezenas -= 50;
        }
        else if (dezenas == 40){
            cout << "XL";
            dezenas -= 40;
        }
        else {
            cout << "X";
            dezenas -= 10;
        }
    }

    while (unidades > 0){
        if (unidades == 9){
            cout << "IX";
            unidades -= 9;
        }
        else if (unidades >= 5){
            cout << "V";
            unidades -= 5;
        }
        else if (unidades == 4){
            cout << "IV";
            unidades -= 4;
        }
        else {
            cout << "I";
            unidades -= 1;
        }
    }

    cout << endl;
}

int main(){
    int num;

    do {
        cin >> num;

        if (num > 0 && num <= 50) {
            Imprime_romano(num);
        }
        else if (num > 50 || num == 0) {
            cout << "NUMERO INVALIDO" << endl;
        }

    } while (num >= 0);

    return 0;
}