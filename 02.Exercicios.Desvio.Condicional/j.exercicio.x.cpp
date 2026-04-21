//Faça um programa que solicita ao usuário três valores correspondentes aos lados de um triângulo.
//Informe se o triângulo é eqüilátero (possui 3 lados iguais), isósceles (possui dois lados iguais) ou escaleno (não possui lados iguais).
//Saídas:
//- Pedido para o usuário = "Digite três números inteiros: ";
//- Caso equilátero = “O triângulo é equilátero”;
//- Caso isósceles = ”O triângulo é isósceles”;
//- Caso escaleno = “O triângulo é escaleno”.

#include <iostream>
using namespace std;

int main(){

  float l1, l2, l3;

  cout<<"Digite três números inteiros: ";
  cin>>l1>>l2>>l3;

  if(l1==l2&&l2==l3){
    cout<<"O triângulo é equilátero";
  } else{
    if(l1==l2&&l2!=l3||l2==l3&&l3!=l1||l3==l1&&l1!=l2){
      cout<<"O triângulo é isósceles";
    } else{
      cout<<"O triângulo é escaleno";
    }
  }

  return 0;
}
