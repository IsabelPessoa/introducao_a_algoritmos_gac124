#include <iostream>
using namespace std;

bool Magia(int inimigos[], int &derrotados){

    // Armazena a quantidade anterior de derrotados
    int anterior = derrotados;

    for(int i = 0; i < 10; i++){
        // Desfere o ataque (inclusive nos cadáveres)
        inimigos[i] -= 1;

        // Percebe quando um inimigo morre
        if(inimigos[i] == 0){
            derrotados++;
        }
    }

    // Confere se o número de cadávares aumentou
    if(derrotados > anterior)
        return true;
    else
        return false;
}

int main(){
    int inimigos[10], derrotados = 0;
    bool ataque = true;

    for(int i = 0; i < 10; i++)
        cin >> inimigos[i];
    
    while(ataque){
        ataque = Magia(inimigos, derrotados);
    }

    cout << derrotados << endl;

    return 0;
}