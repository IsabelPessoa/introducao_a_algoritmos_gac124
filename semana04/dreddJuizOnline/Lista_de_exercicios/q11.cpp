#include <iostream>
using namespace std;

double Calcula_pedagio (double tempo_restante, double tempo_minimo){
    double pedagio = tempo_restante*0.3;
    return pedagio;
}

double Cacula_idade_aposentadoria (int idade, double tempo_de_trabalho, double tempo_minimo){
    double tempo_restante = tempo_minimo - tempo_de_trabalho;
    tempo_restante += Calcula_pedagio(tempo_restante, tempo_minimo);
    return (tempo_restante+idade);
}

int main(){
    bool genero;
    int idade;
    double TempdeT;

    cin >> genero;
    cin >> idade;
    cin >> TempdeT;

    if(genero == 0){
        if(TempdeT > 15)
            cout << Cacula_idade_aposentadoria(idade, TempdeT, 30) << endl;
        else
            cout << 62 << endl;
    }
    else{
        if(TempdeT > 20)
            cout << Cacula_idade_aposentadoria(idade, TempdeT, 35) << endl;
        else
            cout << 65 << endl;
    }

    return 0;
}