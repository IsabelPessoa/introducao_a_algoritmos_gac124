#include <iostream>
#include <fstream>
using namespace std;

int main () {
   float valorInicial, valorFinal;
   ofstream entrada("entrada");
   entrada >> valorFinal;
   entrada >> valorInicial;
   valorFinal=valorInicial - valorInicial * 0.09;
   cout<<valorFinal;
   
   return 0;
}
