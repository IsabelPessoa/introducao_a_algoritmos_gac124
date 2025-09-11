#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int A, B, numInscritos = 0;
    int valor;

    ifstream arquivo ("dados.txt");
    arquivo >> A >> B;
    arquivo >> valor;

    do{
    if(valor >= A && valor <=B)
        numInscritos ++;
    }while(arquivo >> valor);

    cout << numInscritos << endl;

    return 0;
}