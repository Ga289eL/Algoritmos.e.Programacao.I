//Construa um algoritmo que solicite 5 valores inteiros ao usuário e os armazene em um vetor.
//Após, deverá ser invertido os valores do vetor utilizando um segundo vetor.

#include <iostream>
using namespace std;

#define T 5

int main(){
    int a[T], b[T], c;
    
    for(int i=0;i<T;i++){
        cout<<"\nDigite o numero: ";
        cin>>a[i];
    }
    
    cout<<"\nValores foram digitados na seguinte ordem: \n";
    for(int i=0;i<T;i++){
        b[i]=a[i]
        cout<<a[i]<<" | ";
    }
    
    for(int i=0;i<T;i++){
        j=T-1-i;
        a[i]=b[j];
    }
    
    cout<<"\nValores Invertidos: \n";
    for(int i=0;i<T;i++){
        cout<<a[i]<<" | ";
    }
    
    return 0;
}
