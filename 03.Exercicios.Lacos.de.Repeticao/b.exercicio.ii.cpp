//Faça um programa que exiba na tela a tabuada do número 5 no seguinte formato: 5X1=5; 5X2=10; 5X3=15; ... ; 5X10=50.

#include <iostream>
using namespace std;

int main(){

    int operador1=1, operador2=5, calculo;

    while(operador1<=10){
        calculo=operador1*operador2;
        cout<<operador1<<"x"<<operador2<<"="<<calculo<<endl;
        operador1+=1;
    }

    return 0;
}
