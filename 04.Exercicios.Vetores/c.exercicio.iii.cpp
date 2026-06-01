//Declare um vetor de 5 inteiros, leia um valor para cada posição e no final mostre quantos elementos possuem valor maior, menor e igual ao primeiro elemento do vetor.

#include <iostream>
using namespace std;

#define T 5

int main(){
    int vet[T], maior=0, menor=0, igual=0;
    
    for(int i=0;i<T;i++){
        cout<<"Digite o valor: ";
        cin>>vet[i];
        
        if(vet[0]>vet[i])
            maior++;
        else if(vet[0]<vet[i])
            menor++;
        else
            igual++;
    }
    
    cout<<"\nPossuem o valor maior: "<<maior<<"\nPossuem o valor menor: "<<menor<<"\nPossuem o valor igual: "<<igual;
    
    return 0;
}
