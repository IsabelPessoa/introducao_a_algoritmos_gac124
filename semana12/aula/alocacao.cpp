#include <iostream>
using namespace std;

struct aluno{
    string nome;
    int matricula;
};

void Realoca_lista(aluno *&lista, int &capacidade) {
    aluno *novo = new aluno[capacidade + 2];

    for (int i = 0; i < capacidade; i++)
        novo[i] = lista[i];

    delete[] lista;
    lista = novo;
    capacidade += 2;
}

int main(){
    int tamanho, capacidade;
    capacidade = 3;
    tamanho = 0;
    char inserir = 'S';

    aluno *lista = new aluno[capacidade];

    cout << "inserir dado: (S)im (N)ao" << endl;
    cin >> inserir;
    
    while(inserir == 'S' or inserir == 's'){
        if(tamanho == capacidade){
            Realoca_lista(lista, capacidade);
        }
            cin >> lista[tamanho].nome;
            cin >> lista[tamanho].matricula;
            tamanho ++;


            cout << "------Lista completa-----" << endl;
        
            for(int i = 0; i < tamanho; i++){
                cout << &lista[i] << endl;
                cout << lista[i].nome << endl;
                cout << lista[i].matricula << endl;
                cout << "-------------------------" << endl;
            }
        cout << "inserir dado: (S)im (N)ao" << endl;
        cin >> inserir;
    }


    delete[] lista;

    return 0;
}