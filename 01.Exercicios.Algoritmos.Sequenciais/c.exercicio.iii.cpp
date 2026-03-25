//Faça um programa que receba o valor do quilo de um produto e a quantidade de quilos do produto consumida calculando o valor final a ser pago.

#include <iostream>
using namespace std;

int main(){
    
    float valorkg,quantiakg,valorpg;
    
    cout<<"Digite o valor do kg: ";
    cin>>valorkg;
    
    cout<<"Digite a quantia de kg: ";
    cin>>quantiakg;
    
    valorpg=valorkg*quantiakg;
    
    cout<<"Valor a pagar é R$ "<<valorpg;
    
    return 0;
}
