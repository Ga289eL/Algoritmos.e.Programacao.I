//Faça um programa que leia dois vetores A e B, de tamanho 8, e realize a troca dos elementos destes vetores;
//ou seja, após a execução do programa o vetor B deverá conter os valores fornecidos para o vetor A, e vice-versa.

#include <iostream>
using namespace std;

#define T 5

int main(){
    int a[T], b[T], c[T];
    
    for(int i=0;i<T;i++){
    cout<<"\nDigite o valor de A: ";
    cin>>a[i];
    
    cout<<"\nDigite o valor de B: ";
    cin>>b[i];
    
    c[i]=a[i], a[i]=b[i], b[i]=c[i];
    }
    
    cout<<"\nValor de A: \n";
    for(int i=0;i<T;i++)
        cout<<a[i]<<endl;
    
    cout<<"\nValor de B: \n";
    for(int i=0;i<T;i++)
        cout<<b[i]<<endl;
    
    return 0;
}
