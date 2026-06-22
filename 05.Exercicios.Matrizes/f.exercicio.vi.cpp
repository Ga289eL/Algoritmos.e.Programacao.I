//Faça um programa que solicita ao usuário 16 valores reais e armazene em uma matriz 4x4.
//O programa deve somar os elementos de cada uma das linhas armazenando o resultado da soma em um vetor.
//A seguir, deve multiplicar cada elemento da matriz pela soma da sua respectiva linha.
//Exiba na tela a matriz resultante.

#include <iostream>
using namespace std;

#define M 4
#define N 4

int main(){
    float soma=0, mat[M][N]={};
    
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cout<<"\nDigite o valor: ";
            cin>>mat[i][j];
        }
    }
    
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
                soma+=mat[i][j];
    
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
                mat[i][j]*=soma;
    
    cout<<"\n";
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++)
            cout<<" "<<mat[i][j]<<"\t";
            
        cout<<"\n\n";
    }
    
    cout<<"A soma dos elementos da matriz é: "<<soma;
    
    return 0;
}
