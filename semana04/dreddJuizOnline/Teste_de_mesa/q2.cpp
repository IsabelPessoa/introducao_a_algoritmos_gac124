#include <iostream>
using namespace std;

int main(){
    double temperatura;
    cin >> temperatura;

    if(temperatura < 10){
        cout << "Muito frio" << endl;
    }
    else if(temperatura <= 20){
        cout << "Frio" << endl;
    }
    else if(temperatura <= 30){
        cout << "Agradável" << endl;
    }
    else if(temperatura <= 40){
        cout << "Quente" << endl;
    }
    else{
        cout << "Muito quente" << endl;
    }

    return 0;
}