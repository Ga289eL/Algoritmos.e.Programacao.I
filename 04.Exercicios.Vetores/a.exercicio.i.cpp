//Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre a média, o menor e o maior valor contidos no vetor.

#include <iostream>
using namespace std;

#define T 10

int main(){
    int vet[T], max=0, min=0, soma=0;
    float med=0;
    
    for(int i=0; i<T; i++){
        cout<<"\nDigite o valor: ";
        cin>>vet[i];
        
        soma+=vet[i];
        
        if(vet[i]>max)
            max=vet[i];
        if(vet[i]<min)
            min=vet[i];
    }
    
    med= (float) soma/T;
    
    cout<<"\nMedia do valor: "<<med<<"\nMenor valor: "<<min<<"\nMaior valor: "<<max;
    
    return 0;
}
