//Construa um algoritmo que solicite 5 valores ao usuário, armazene estes em um vetor de 5 posições inteiras.
//Após verifique se o número 7 se encontra no vetor.
//Em caso positivo, exiba qual a posição em que ele foi encontrado.
//Se ele for encontrado mais de uma vez também quantas vezes ele foi encontrado.

#include <iostream>
using namespace std;

#define T 5

int main(){
    int vetor[T], sete=0;
    
    for(int i=0;i<T;i++){
        cout<<"\nDigite o numero: ";
        cin>>vetor[i];
    }
    
    for(int i=0;i<T;i++){
        if(vetor[i]==7){
            sete++;
            cout<<" | "<<vetor[i]<<" | "<<"-> valor encontrado na posição " << i << " pela "<< sete << "ª vez\n";
        } else{
            cout<<" | "<<vetor[i]<<" | \n";
        }
    }
    
    return 0;
}
