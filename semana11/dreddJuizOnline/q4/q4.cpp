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

    for(int i = 0; i < num_alunos; i++)
        if(alunos[i].sexo == sexo) media+=(alunos[i].nota1 + alunos[i].nota2);

    return media/(num_alunos*2);
}

int main(){
    int num_de_alunos, num_f = 0, num_m = 0;
    int media_g, media_m, media_f;
    cin >> num_de_alunos;
    Aluno alunos[num_de_alunos];

    for(int i = 0; i<num_de_alunos; i++){
        cin >> alunos[i].numero_de_matricula >> alunos[i].nome >> alunos[i].nota1 >> alunos[i].nota2 >> alunos[i].sexo;
        if(alunos[i].sexo == 'M' or alunos[i].sexo == 'm') num_m++;
        else if(alunos[i].sexo == 'F' or alunos[i].sexo == 'f') num_f++;
    }

    cout << Media_geral(alunos, num_de_alunos) << endl;
    cout << Media_por_sexo(alunos, 'M', num_m) << endl;
    cout << Media_por_sexo(alunos, 'F', num_f) << endl;

    return 0;
}