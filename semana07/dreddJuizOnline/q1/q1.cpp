#include <iostream>
#include <iomanip>
using namespace std;
int tam_vetor = 7;

double Temp_media(double temp[]){
    double media = 0;

    for (int i = 0; i < tam_vetor; i++)
        media += temp[i];

    return (media/tam_vetor);
}

int N_dias_temp_acima(double temp[]){
    int numero = 0;
    double media = Temp_media(temp);

    for(int i = 0; i < tam_vetor; i++)
        if(temp[i] > media){
            numero++;
        }

    return numero;
}

double Maior_temp(double temp[]){
    double temperatura = temp[0];

    for(int i = 1; i < tam_vetor; i++)
        if(temp[i] > temperatura)
            temperatura = temp[i];
    
    return temperatura;
}

int main(){
    double temp[tam_vetor];
    for(int i = 0; i < tam_vetor; i++)
        cin >> temp[i];
    
    cout << Temp_media(temp) << endl;
    cout << N_dias_temp_acima(temp) << endl;
    cout << Maior_temp(temp) << endl;


    return 0;
}