#include <iostream>
using namespace std;

void Imprime_triangulo(int n){
    int j;
    for(int i = 1; i<=n; i++){
        j = 0;
        while(j<i){
            if(j%2 == 0)
                cout << "*";
            else
                cout << "=";
            j++;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    Imprime_triangulo(n);

    return 0;
}