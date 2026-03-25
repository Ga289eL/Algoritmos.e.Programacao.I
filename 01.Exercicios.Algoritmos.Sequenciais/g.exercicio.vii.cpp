//Faça um programa que calcula os gastos com combustível em uma viagem.
//a. O programa deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do carro em Km/litro e o preço do litro do combustível.
//b. Como resposta o programa deverá informar qual o valor em R$ a ser gasto com combustível na viagem.

#include <iostream>
using namespace std;

int main(){
    
    float distancia,consumo,litro,gasto;
    
    cout<<"Digite a distancia ser percorrida: ";
    cin>>distancia;
    
    cout<<"Digite o consumo do carro: ";
    cin>>consumo;
    
    cout<<"Digite o preço do combustível: ";
    cin>>litro;
    
    gasto=distancia*litro/consumo;
    
    cout<<"Valor aser gasto é R$ "<<gasto;
    
    return 0;
}
