//Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições em que o índice de linha tem valor igual ao da coluna.

#include <iostream>
using namespace std;

#define C 5
#define L 5

int main(){
    int mat[L][C]={};
    
    for(int i=0;i<L;i++){
            mat[i][i]=1;
    }
    
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++)
            cout<<" "<<mat[i][j]<<"\t";
            
        cout<<"\n\n";
    }
    
    return 0;
}
