//Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições.

#include <time.h>
#include <iostream>
using namespace std;

#define C 5
#define L 5

int main(){
    srand(time(NULL));
    
    int mat[L][C];
    
    for(int lin=0;lin<L;lin++){
        for(int col=0;col<C;col++)
            mat[lin][col]=1;
    }
    
    for(int lin=0;lin<L;lin++){
        for(int col=0;col<C;col++)
            cout<<mat[lin][col]<<"\t";
            
        cout<<endl<<endl;
    }
    
    return 0;
}
