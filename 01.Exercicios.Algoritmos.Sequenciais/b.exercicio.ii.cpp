//Faça um programa que solicita ao usuário um número real e exibe na tela a metade do número digitado

#include <iostream>
using namespace std;

int main(){
    
    float nreal,nmetade;
    
    cout<<"Digite o valor: ";
    cin>>nreal;
    
    nmetade=nreal/2.0;
    
    cout<<"Metade de "<<nreal<<" é igual a "<<nmetade;
    
    return 0;
}
