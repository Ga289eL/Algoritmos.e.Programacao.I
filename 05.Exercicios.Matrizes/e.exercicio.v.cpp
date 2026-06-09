//Faça um programa que leia uma matriz 4x4 e que logo em seguida realize o somatório de todos elementos contidos na diagonal principal. Exiba o resultado.

#include <time.h>
#include <iostream>
using namespace std;

#define C 4
#define L 4

int main(){
    srand(time(NULL));
    int mat[L][C]={}, soma=0;
    
    for(int i=0;i<L;i++){
        mat[i][i]=rand()%9+1;
    }
    
    for(int i=0;i<L;i++){
        soma+=mat[i][i];
    }
    
    cout<<"\n";
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++)
            cout<<" "<<mat[i][j]<<"\t";
            
        cout<<"\n\n";
    }
    
    cout<<"A soma da diagonal principal é: "<<soma;
    
    return 0;
}
