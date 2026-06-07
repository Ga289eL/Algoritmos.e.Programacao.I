//Leia 30 valores e jogue os pares em um vetor e os ímpares em outro.
//Após a leitura calcule o somatório dos dois vetores e exiba o de maior valor.

#include <iostream>
using namespace std;

#define T 5

int main(){
    int vetor[T], impar[T], par[T], somapar=0, somaimpar=0;
    
    for(int i=0;i<T;i++){
        cout<<"\nDigite o numero: ";
        cin>>vetor[i];
        
        par[i]=0;
        impar[i]=0;
        
        if (vetor[i]%2==0)
            par[i]=vetor[i];
        else
            impar[i]=vetor;
        
        somapar+=par[i];
        somaimpar+=impar[i];
    }
    
    cout<<"\nSomatorio do vetor par: "<<somapar<<endl;
    cout<<"\nSomatorio do vetor impar: "<<somaimpar<<endl;
    
    cout<<"\nValores do vetor de maior valor:\n";
    for(int i=0;i<T;i++){
        if(somapar>somaimpar)
            cout<<" | "<<par[i]<<" | \n";
        else
            cout<<" | "<<impar[i]<<" | \n";
    }
    
    return 0;
}
