//Calcule a média das notas de 10 alunos de uma disciplina e determine o número de alunos que tiveram nota superior a média calculada.

#include <iostream>
using namespace std;

#define T 10

int main(){
    int acima=0;
    float nota[T], media=0;
    
    for(int i=0;i<T;i++){
        cout<<"\nDigite o valor: ";
        cin>>nota[i];
        
        media+=nota[i];
    }
    
    media/= (float) T;
    
    cout<<"Media é igual a "<<media;
    
    for(int i=0;i<T;i++){
		if(nota[i]>media){
        acima++;
		cout<<"\n-> " <<nota[i];
		}
    }
	
    cout<<"\nAlunos acima da media: "<<acima;
	
    return 0;
}
