//Leia o valor do produto e adicione mais 15% de imposto. Escreva o preço final do produto.

#include <iostream>
using namespace std;

int main(){
    
    float valorpd,valorend;
    
    cout<<"Digite o valor do produto: ";
    cin>>valorpd;
    
    valorend=valorpd*1.15;
    
    cout<<"Preço final: R$ "<<valorend;
    
    return 0;
}
