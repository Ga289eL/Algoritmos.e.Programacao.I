//Faça um programa que solicita ao usuário três números reais e exibe na tela apenas o menor deles.

#include <iostream>
using namespace std;

int main(){

  float n1, n2, n3;

  cout<<"Digite três valores: ";
  cin>>n1>>n2>>n3;

  if(n1<n2 && n1<n3){
    cout<<"O menor numero é: "<<n1;
  } else {
    if(n2<n1 && n2<n3){
    cout<<"O menor numero é: "<<n2;
    } else{
      cout<<"O menor numero é: "<<n3;
    }
  }
    
    return 0;
}
