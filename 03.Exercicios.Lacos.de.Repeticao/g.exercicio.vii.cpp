//Faça um programa que solicita ao usuário uma quantidade indeterminada de números inteiros.
//O programa deve calcular e escrever a média aritmética apenas dos números pares.
//A entrada de dados deve ser encerrada quando o número 0 (ZERO) for digitado.

#include <iostream>
using namespace std;

int main(){

    int numero, contador=0, media=0;
    float res=0;

    do{
        cout<<"Digite um valor: ";
        cin>>numero;
        
        if(numero%2==0 && numero!=0){
            media+=numero;
            contador+=1;
        }
    } while(numero!=0);
    
    if(contador!=0){
        res=media/contador;
        cout<<"Media: "<<res<<endl;
    }
    
    return 0;
}
