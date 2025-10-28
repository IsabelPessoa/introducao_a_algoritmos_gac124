#include <iostream>
using namespace std;

int main (){
    int tam = 6;
    int matriz[tam][tam];

    for(int i = 0; i < tam; i++)
        for(int j = 0; j < tam ; j++)
            cin >> matriz[i][j];
    
    for(int i = 0; i < tam; i++){
        for(int j = tam-1; j >= 0 ; j--)
            cout << matriz[j][i] << "\t";
        cout << endl;
    }

    return 0;
}