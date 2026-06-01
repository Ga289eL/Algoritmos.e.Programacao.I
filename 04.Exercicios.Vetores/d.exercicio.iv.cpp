//Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre os elementos deste vetor em posição inversa ao que foram atribuídos.

#include <iostream>
using namespace std;

#define T 5

int main(){
    int vet[T];
    
    for(int i=0;i<T;i++){
        cout<<"Digite o valor: ";
        cin>>vet[i];
    }
    cout<<"Ordem inversa: ";
    for(int i=T-1;i>=0;i--){
        cout<<endl<<vet[i];
    }

    return 0;
}
