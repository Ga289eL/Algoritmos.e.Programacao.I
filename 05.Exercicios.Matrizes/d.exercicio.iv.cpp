//Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições em que o índice de linha tem valor maior que o da coluna.

#include <iostream>
using namespace std;

#define C 5
#define L 5

int main(){
    int mat[L][C]={};
    
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            if(i>j)
            mat[i][j]=1;
        }
    }
    
    cout<<"\n";
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++)
            cout<<" "<<mat[i][j]<<"\t";
            
        cout<<"\n\n";
    }
    
    return 0;
}
