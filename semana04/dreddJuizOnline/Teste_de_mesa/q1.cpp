#include <iostream>
using namespace std;

int main(){

    double num1, num2, num3, num4;
    //      4       1   2       3

    cin >> num1 >> num2 >> num3 >> num4;
    cout << "O maior numero é: ";

    if((num1 > num2) && (num1 > num3) && (num1 > num4)){
        cout << num1 << endl;

        // --------------SEGUNDO MAIOR--------------------
        cout << "O segundo maior numero é: ";
        if((num2 > num3) && (num2 > num4)){
            cout << num2 << endl;
        }
        else if(num3 > num4){
            cout << num3 << endl;
        }
        else{
            cout << num4 << endl;
        }
        // -----------------------------------------------
    }
    else if((num2 > num3) && (num2 > num4)){
        cout << num2 << endl;

        // --------------SEGUNDO MAIOR--------------------
        cout << "O segundo maior numero é: ";
        if((num1 > num3) && (num1 > num4)){
            cout << num1 << endl;
        }
        else if(num3 > num4){
            cout << num3 << endl;
        }
        else{
            cout << num4 << endl;
        }
        // -----------------------------------------------
    }
    else if(num3 > num4){
        cout << num3 << endl;
        // --------------SEGUNDO MAIOR--------------------
        cout << "O segundo maior numero é: ";
        if((num1 > num2) && (num1 > num4)){
            cout << num1 << endl;
        }
        else if(num2 > num4){
            cout << num2 << endl;
        }
        else{
            cout << num4 << endl;
        }
        // -----------------------------------------------
    }
    else{
        cout << num4 << endl;
        // --------------SEGUNDO MAIOR--------------------
        cout << "O segundo maior numero é: ";
        if((num1 > num2) && (num1 > num3)){
            cout << num1 << endl;
        }
        else if(num2 > num3){
            cout << num2 << endl;
        }
        else{
            cout << num3 << endl;
        }
        // -----------------------------------------------
    }


    
    return 0;
}