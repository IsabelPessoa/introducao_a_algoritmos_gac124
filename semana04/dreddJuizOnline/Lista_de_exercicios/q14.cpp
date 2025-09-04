#include <iostream>
using namespace std;

int Encontra_CM(int num){
    return ((num-(num%100000))/100000);
}
int Encontra_DM(int num){
    return ((num-(num%10000))/10000);
}
int Encontra_UM(int num){
    return ((num-(num%1000))/1000);
}
int Encontra_C(int num){
    return ((num-(num%100))/100);
}
int Encontra_D(int num){
    return ((num-(num%10))/10);
}

bool Confere_palindromo(int num){
    int x = num;
    int alg1, alg2, alg3, alg4, alg5, alg6;
    alg1 = Encontra_CM(x);
    x -= Encontra_CM(x)*100000;

    alg2 = Encontra_DM(x);
    x -= Encontra_DM(x)*10000;

    alg3 = Encontra_UM(x);
    x -= Encontra_UM(x)*1000;

    alg4 = Encontra_C(x);
    x -= Encontra_C(x)*100;

    alg5 = Encontra_D(x);
    x -= Encontra_D(x)*10;

    return ((alg1 == al6) and (alg2 == alg5) and (alg3 == alg4));
}

int main(){
    string cor1, cor2;
    int num;
    bool ok;
    
    cin >> num;
    ok = Confere_palindromo(num);


    return 0;
}