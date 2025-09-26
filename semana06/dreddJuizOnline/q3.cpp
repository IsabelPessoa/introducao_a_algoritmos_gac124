#include <iostream>
#include <string>
using namespace std;

double Cm_Para_M(double n){
    return (n/100);
}
double M_Para_Cm(double n){
    return (n*100);
}

int main(){
    double num;
    string grandeza;

    cin >> num >> grandeza;

    if(grandeza == "centimetro")
        cout << M_Para_Cm(num) << " cm" << endl;
    else if(grandeza == "metro")
        cout << Cm_Para_M(num) << " m" << endl;
    else 
        cout << "ERRO" << endl;


    return 0;
}