//Faça um programa que exiba na tela os números inteiros de 100 até 1.

#include <iostream>
using namespace std;

int main(){

  int contador=100;

  while(contador>=1){
    cout<<contador<<endl;
    contador-=1;
  }

  return 0;
}
