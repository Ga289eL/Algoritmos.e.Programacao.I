//Faça um programa que solicita o peso de 25 pessoas e exibe qual o maior peso e qual o menor peso dentre os digitados.

#include <iostream>
using namespace std;

int main () {

    int i, valor, menor, maior;

    for(i=1;i<=25;i++){

        cout<<"Digite o "<<i<<"º peso: ";
        cin>>valor;

        if(menor>valor)
            menor=valor;
        if(maior<valor)
            maior=valor;
      
    }

    cout<<"\nO menor peso digitado é "<<menor;
    cout<<"\nO maior peso digitado é "<<maior;

    return 0;

}
