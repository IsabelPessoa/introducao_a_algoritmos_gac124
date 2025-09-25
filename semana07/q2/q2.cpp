#include <iostream>
#include <cmath>
using namespace std;
int tam_vetor = 15;
int tam_indices = 7;

int main(){
    double vetorV[tam_vetor];
    int indices[tam_indices];

    for(int i = 0; i < tam_vetor; i++)
        cin >> vetorV[i];

    for(int i = 0; i < tam_indices; i++)
        cin >> indices[i];

    for(int i = 0; i < tam_indices; i++)
        cout << (vetorV[indices[i]]/2) << " ";
    

    return 0;
}