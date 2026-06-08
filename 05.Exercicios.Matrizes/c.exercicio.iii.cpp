//Faça um programa que solicita ao usuário 25 valores reais e armazene em uma matriz 5x5.
//A seguir troque todos os elementos da matriz que sejam maiores do que 100 pelo valor zero.
//Exiba a matriz original e alterada.

#include <iostream>
using namespace std;

#define C 5
#define L 5

int main(){
    int mat[L][C]={};
    
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            cout<<"\nDigite o valor: ";
            cin>>mat[i][j];
        }
    }
    
    for(int i=0;i<L;i++)
        for(int j=0;j<C;j++)
            if(mat[i][j]>100)
                mat[i][j]=0;
    
    cout<<"\n";
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++)
            cout<<" "<<mat[i][j]<<"\t";
            
        cout<<"\n\n";
    }
    
    return 0;
}
