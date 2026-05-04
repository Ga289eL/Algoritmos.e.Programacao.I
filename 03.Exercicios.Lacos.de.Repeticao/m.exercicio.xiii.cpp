//Faça um algoritmo que leia um conjunto de 20 números inteiros e indique, ao final, qual foi o menor valor digitado.

#include <iostream>
using namespace std;

int main () {

    int i, valor, menor;

    for(i=1;i<=20;i++){

        cout<<"Digite o "<<i<<"º valor inteiro: ";
        cin>>valor;

        if(menor>valor)
            menor=valor;
      
    }

    cout<<"O menor valor digitado é "<<menor;

    return 0;

}
