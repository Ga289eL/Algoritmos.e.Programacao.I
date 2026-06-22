//Faça um programa que preenche duas matrizes, uma M (4X6) e outra N (6X4).
//A seguir o programa deverá criar uma nova matriz que seja o produto matricial de M por N.

#include <iostream>
using namespace std;

#define M 4
#define N 6

int main(){
    float multi[M][M]={}, matm[M][N]={}, matn[N][M]={};
    
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cout<<"\nDigite o valor: ";
            cin>>matm[i][j];
        }
    }
    
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cout<<"\nDigite o valor: ";
            cin>>matn[i][j];
        }
    }
    
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            for(int k=0; k<N; k++)
                multi[i][j]+=matm[i][k]*matn[k][j];
    
    cout<<"\n";
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++)
            cout<<" "<<multi[i][j]<<"\t";
            
        cout<<"\n\n";
    }
    
    cout<<"A soma dos elementos da matriz é: ";
    
    return 0;
}
