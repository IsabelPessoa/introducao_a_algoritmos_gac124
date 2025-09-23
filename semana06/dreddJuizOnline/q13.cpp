#include <iostream>
using namespace std;

int Minutos(int h){
    return (h*60);
}

int Calcula_tempo(int h1,int h2, int m1,int m2){
    int minutos0 = m1+Minutos(h1);
    int minutosf = m2+Minutos(h2);
    if(minutosf > minutos0)
        return (minutosf-minutos0);
    else if(m1 > m2)
        return (minutosf- minutos0)+1440;
    else
        return ((60-m1)+m2);
}

int main(){
    int h1, m1, h2, m2=1, minutos;
    while (!((h1 == 0) and (m1 == 0) and (h2 == 0) and (m2 == 0))){
        cin >> h1 >> m1 >> h2 >> m2;
        minutos = Calcula_tempo(h1, h2, m1, m2);
        cout << minutos << endl;
    }
    return 0;
}