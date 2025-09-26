#include <iostream>
using namespace std;

void Imprime_linha(int n){
    for(int i = 1; i <= n; i++)
        cout << i << " ";
    cout << endl;
}

int main(){
    int N;

    cin >> N;

    for(int i = 1; i <= N; i++)
        Imprime_linha(i);

    return 0;
}