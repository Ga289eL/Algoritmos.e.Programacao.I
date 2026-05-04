//Faça um programa que solicita a idade de 10 pessoas e exiba a quantidade de pessoas que possui idade maior ou igual a 18 anos.

#include <iostream>
using namespace std;

int main () {

    int i, idade, maior=0;

    for(i=1;i<=10;i++){

        cout<<"Digite a idade da "<<i<<"ª pessoa: ";
        cin>>idade;

        if(idade>17){
            maior+=1;
        }
      
    }

    cout<<"A quantidade de pessoas com idade maior ou igual a 18 é "<<maior;

    return 0;

}
