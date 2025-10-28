#include <iostream>
using namespace std;

struct Data_de_nascimento{
    int dia;
    int mes;
    int ano;
};


struct Pessoa{
    string nome;
    Data_de_nascimento nascimento;
};

string Compara(int valor1, int valor2){
    if (valor1 == valor2)
        return "igual";
    else if(valor1 > valor2)
        return "+novo";
    else
        return "+velho";
}

int Encontra_mais_velho(Pessoa pessoa1, Pessoa pessoa2, int posicao1, int posicao2){
    if(Compara(pessoa1.nascimento.ano, pessoa2.nascimento.ano) == "igual"){
        if(Compara(pessoa1.nascimento.mes, pessoa2.nascimento.mes) == "igual"){
            if(Compara(pessoa1.nascimento.dia, pessoa2.nascimento.dia) == "igual")
                return posicao2;
            else if(Compara(pessoa1.nascimento.dia, pessoa2.nascimento.dia) == "+velho")
                return posicao1;
            else
                return posicao2;
        }
        else if(Compara(pessoa1.nascimento.mes, pessoa2.nascimento.mes) == "+velho")
            return posicao1;
        else
            return posicao2;
    }
    else if(Compara(pessoa1.nascimento.ano, pessoa2.nascimento.ano) == "+velho")
        return posicao1;
    else
        return posicao2;
}

int main(){
    int n;
    int mais_velho = 0;
    cin >> n;

    Pessoa pessoas[n];

    for(int i = 0; i < n; i++){
        cin >> pessoas[i].nome >> pessoas[i].nascimento.dia >> pessoas[i].nascimento.mes >> pessoas[i].nascimento.ano; 
        mais_velho = Encontra_mais_velho(pessoas[i], pessoas[mais_velho], i, mais_velho);
    }

    cout << pessoas[mais_velho].nome << endl;

    return 0;
}