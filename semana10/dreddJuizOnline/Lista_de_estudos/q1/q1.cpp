#include <iostream>
using namespace std;

int main (){
    int matriz[15][15];
    int* linha = new int;
    int* coluna = new int;
    int* resultado = new int[3];

    for (int i = 0 ; i < 15 ; i++)
        for (int j = 0 ; j < 15 ; j++)
            cin >> matriz[i][j]; 
    
    for (int i = 0; i < 3; i++){
        cin >> *linha >> *coluna;
        resultado[i] = matriz[*linha][*coluna];
    }  


    for(int i = 0; i < 3 ; i++){
        if(resultado[i] == 0)
            cout << "agua" << endl;
        else if(resultado[i] == 1)
            cout << "destroier" << endl;
        else if(resultado[i] == 2)
            cout << "fragata" << endl;
        else if(resultado[i] == 3)
            cout << "lancha" << endl;
    }

    delete linha;
    delete coluna;
    delete[] resultado;
    
    return 0;
}