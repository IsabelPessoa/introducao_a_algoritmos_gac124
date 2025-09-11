#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int tentativa;
    int senha = 23031999;
    int cont = 0;
    
    ifstream tentativas("tentativas.txt");

    while((tentativas >> tentativa) and (cont < 4)){
        cont++;
        if(tentativa == senha)
            break;
    }

    if(tentativa == senha)
        cout << "acessou ";
    else
        cout << "nao ";

    cout << cont << endl;

    return 0;
}