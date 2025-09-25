#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

/*
Caixa de chocolate - R$ 13,50
Trufa de chocolate - R$ 2,50
Pacotinho de Jujuba - R$ 1,50
Drops de hortelã - R$ 1,00
Bala de morango - R$ 0,25
*/

int Qtd_doces(double din, double preco){
    return floor(din/preco);
}

int main() {
    double dinheiro, total, caixa, trufa, jujuba, hort, bala;
    cin >> dinheiro;

    caixa = Qtd_doces(dinheiro, 13.5);
    dinheiro -= caixa*13.5;
    trufa = Qtd_doces(dinheiro, 2.5);
    dinheiro -= trufa*2.5;
    jujuba = Qtd_doces(dinheiro, 1.5);
    dinheiro -= jujuba*1.5;
    hort = Qtd_doces(dinheiro, 1);
    dinheiro -= hort; 
    bala = Qtd_doces(dinheiro, 0.25);
    dinheiro -= bala*0.25;
    
    total = caixa*13.5 + trufa*2.5 + jujuba*1.5 + hort*1 + bala*0.25;

    ofstream saida("doces.txt");
    saida << total << endl;
    saida << caixa << endl;
    saida << trufa << endl;
    saida << jujuba << endl;
    saida << hort << endl;
    saida << bala << endl;

    return 0;
}