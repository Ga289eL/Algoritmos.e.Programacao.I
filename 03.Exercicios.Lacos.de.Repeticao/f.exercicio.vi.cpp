//Faça um programa que solicita ao usuário dois valores inteiros e positivos que serão a base e o expoente.
//O programa deve usar laço de repetição para calcular e escrever o resultado da base elevado ao expoente (potencia).

#include <iostream>
using namespace std;

int main(){

  int base, expoente, resultado, contador=1;

  cout<<"Digite valores da base e do expoente: ";
  cin>>base>>expoente;

  resultado=base;
  if(base==0){
    resultado=1;
  }

  while(contador<expoente){
    resultado*=base;
    contador+=1;
  }  

  cout<<resultado;
  
  return 0;
}
