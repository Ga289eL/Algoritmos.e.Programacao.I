//João recebeu seu salário S1 (em reais) e precisa pagar duas contas (C1 e C2) que estão atrasadas.
//Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta.
//Faça um algoritmo que calcule e mostre quanto restará do salário do João.

#include <iostream>
using namespace std;

int main(){
    
    float S1, C1, C2;
    
    cout<<"Digite o valor do salário: ";
    cin>>S1;
    
    cout<<"Digite o valor das contas a pagar: ";
    cin>>C1>>C2;
    
    S1=S1-(C1*1.02+C2*1.02);
    
    cout<<"Restará do salário R$"<<S1;
    
    return 0;
}
