//Faça um programa que exiba o maior dentre dois números reais digitados pelo usuário.
//Caso eles sejam iguais exiba uma mensagem correspondente. Saídas:
//- Pedido ao usuário = "Digite dois números reais: ";
//- Caso eles sejam iguais = “Eles são iguais”.
//- Caso sejam diferentes exiba somente o numero desejado.

#include <iostream>
using namespace std;

int main(){
  
  float d, d1, d2;
  
  cout<<"Digite dois números reais: ";
  cin>>d;
  
  d1=d%10;
  d=d/10;
  d2=d;
  
  if(d1==d2){
    cout<<"Eles são iguais";
  } else if (d1>d2){
    cout<<"O numero maior é: "<<d1;
  } else {
    cout<<"O numero maior é: "<<d2;
  }
  
  return 0;
}
