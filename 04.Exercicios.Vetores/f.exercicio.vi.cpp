//Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre o calculo do fatorial do maior e do menor.

#include <iostream>
using namespace std;

#define T 10

int main(){
    int vetor[T], maior, menor, fatma=1, fatme=1;
    
    for(int i=0; i<T; i++)
        vetor[i]=0;
    for(int i=0; i<T; i++){
        cout<<"\nDigite o numero: ";
        cin>>vetor[i];
    }
    
    menor=vetor[0];
    maior=vetor[0];
    
    for(int i=0; i<T; i++){
        if(vetor[i]<menor)
            menor=vetor[i];
        if(vetor[i]>maior)
            maior=vetor[i];
    }
    
    for(int i=1; i<=menor; i++)
        fatme*=i;
    for(int i=1; i<=maior; i++)
        fatma*=i;
    
    cout<<"\nFatorial do menor "<<fatme;
    cout<<"\nFatorial do maior "<<fatma;
    
    return 0;
}
