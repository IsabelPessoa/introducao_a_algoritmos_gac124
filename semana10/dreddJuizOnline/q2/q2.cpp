#include <iostream>
using namespace std;

int busca(int v[], int ini, int fim, int x){
    if(ini > fim)
        return -1;
    
    int meio = (ini + fim) / 2;

    if(v[meio] == x){
        if(meio == 0 || v[meio - 1] != x)
            return meio;
        else
            return busca(v, ini, meio - 1, x);
    }
    else if(v[meio] < x)
        return busca(v, ini, meio - 1, x);
    else
        return busca(v, meio + 1, fim, x);
}

int main(){
    int n, x;
    cin >> n;

    int v[n];

    for(int i = 0; i < n; i++)
        cin >> v[i];

    cin >> x;

    cout << busca(v, 0, n - 1, x) << endl;

    return 0;
}
