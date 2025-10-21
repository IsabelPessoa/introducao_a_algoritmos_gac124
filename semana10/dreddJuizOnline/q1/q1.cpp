#include <iostream>
using namespace std;

int main() {
    int matriz[7][7];
    int distancia;
    int soma = 0;

    cin >> distancia;

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> matriz[i][j];
        }
    }

    int dist_borda = 3 - distancia;

    for (int i = 0; i < 7; i++) {
        if (i == dist_borda || i == 6 - dist_borda) {
            for (int j = dist_borda; j <= 6 - dist_borda; j++) {
                soma += matriz[i][j];
            }
        }
        else if (i > dist_borda && i < 6 - dist_borda) {
            soma += matriz[i][dist_borda];
            soma += matriz[i][6 - dist_borda]; 
        }
    }

    cout << soma << endl;

    return 0;
}
