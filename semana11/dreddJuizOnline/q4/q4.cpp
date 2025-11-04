#include <iostream>
using namespace std;

struct Aluno {
    int numero_de_matricula;
    string nome;
    float nota1;
    float nota2;
    char sexo;
};

float Media_geral (Aluno alunos[], int num_alunos){
    float media = 0;

    for(int i = 0; i < num_alunos; i++)
        media+=(alunos[i].nota1 + alunos[i].nota2);

    return media/(num_alunos*2);
}

float Media_por_sexo (Aluno alunos[], char sexo, int num_alunos){
    float media = 0;
    int num_sexo = 0;

    for(int i = 0; i < num_alunos; i++){
        if(alunos[i].sexo == sexo) {
            media+=(alunos[i].nota1 + alunos[i].nota2)/2;
            num_sexo++;
        }
    }

    return media/(num_sexo);
}

int main(){
    int num_de_alunos;
    cin >> num_de_alunos;
    Aluno alunos[num_de_alunos];

    for(int i = 0; i<num_de_alunos; i++){
        cin >> alunos[i].numero_de_matricula >> alunos[i].nome >> alunos[i].nota1 >> alunos[i].nota2 >> alunos[i].sexo;
    }


    cout << Media_geral(alunos, num_de_alunos) << endl;
    cout << Media_por_sexo(alunos, 'M', num_de_alunos) << endl;
    cout << Media_por_sexo(alunos, 'F', num_de_alunos) << endl;

    return 0;
}