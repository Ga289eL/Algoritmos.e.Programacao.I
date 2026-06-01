//Leia dois vetores A e B com vinte elementos. Construa um terceiro vetor C, onde cada elemento é a subtração do elemento correspondente de a A com B.

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
    }
    
    cout<<"Valores resultantes: | ";
    for(int i=0;i<T;i++){
        c[i]=a[i]-b[i];
        cout<<c[i]<<" | ";
    }

    return 0;
}
