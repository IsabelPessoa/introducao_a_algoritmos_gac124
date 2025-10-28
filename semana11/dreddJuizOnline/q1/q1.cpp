#include <iostream>
using namespace std;

struct Ponto{
    int x, y;
};

struct retangulo
{
    Ponto V1, V2;
};


bool Avalia_retangulo(int P[], retangulo ret){
    if((P[0] >= ret.V1.x && P[0] <= ret.V2.x) && (P[1] >= ret.V1.y && P[1] <= ret.V2.y))
        return true;
    else
        return false;
}

int main(){
    int count = 0;
    int n_retangulos;
    int P[2];

    cin >> P[0] >> P[1];
    cin >> n_retangulos;

    retangulo ret;

    for(int i = 0; i < n_retangulos; i++){
        cin >> ret.V1.x >> ret.V1.y >> ret.V2.x >> ret.V2.y;
        if(Avalia_retangulo(P, ret)) count++;
    }

    cout << count << endl;

    return 0;
}


