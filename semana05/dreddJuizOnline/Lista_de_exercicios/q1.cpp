#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num, numMaior, numMenor, segMaior, segMenor;

    ifstream arquivo("entrada.txt");
    arquivo >> num;
    
    numMaior = num;
    numMenor = num;
    segMaior = num;
    segMenor = num;

    while(arquivo >> num){
        if(num > numMaior){
            segMaior = numMaior;
            numMaior = num;
        }
        else if(num < numMenor){
            segMenor = numMenor;
            numMenor = num;
        }
    }
    
    if(segMaior == segMenor){
        segMaior = numMaior;
        segMenor = numMenor;
    }


    cout << numMenor << endl;
    cout << segMenor << endl;
    cout << numMaior << endl;
    cout << segMaior << endl;

    return 0;
}