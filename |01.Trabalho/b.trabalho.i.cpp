/******************************************************************************************************************
 * *********************************************** Verificador de CPF *********************************************
 * Criadores: Alison Brito * Daniel Rosso Strutz * Gabriel Alves Jacques * Luiz Carlos Pedro * Romulo Cesar Koppe *
******************************************************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int d, d1, d2, d3, d4, d5, d6, d7, d8, d9, digito1, digito2;
    /*"d" se refere-se ao digito inteiro, o restante seria a separação do "d" numerados conforme as suas posições. digito1 e digito2 sao as variaveis que armazenarão o calculo dos ultimos dois digitos*/
    
    cout<<"Insira de 8 a 9 digitos do CPF: ";
    cin>>d;
    /*Nesta parte o programa recebe o valor de "d"*/
    
    if(d<0 || d>999999999){
        cout<<"Valor inserido diferente do solicitado. Reinicie.";
        return 0;
    }
    /*Este if serve caso o usuario coloque um valor invalido que nao é aceito para o programa.*/
    
    d9=d%10;
    d=d/10;
    d8=d%10;
    d=d/10;
    d7=d%10;
    d=d/10;
    d6=d%10;
    d=d/10;
    d5=d%10;
    d=d/10;
    d4=d%10;
    d=d/10;
    d3=d%10;
    d=d/10;
    d2=d%10;
    d=d/10;
    d1=d;
    /*Aqui separamos cada numero conforme sua respectiva ordem da direita para a esquerda.*/
    
    d = d1*10 + d2*9 + d3*8 + d4*7 + d5*6 + d6*5 + d7*4 + d8*3 + d9*2;
    /*Primeiro calculo do que basicamente 'criptografica' os dois ultimos digitos do cpf. Neste caso esse é o calculo do penultimo digito do cpf.*/
    
    d=d%11;
    digito1=11-d;
    /*Aqui esta o resultado do penultimo digito do cpf caso ele não seja menor que 2.*/
    
    if(d<2){
        digito1=0;
    }
    /*Caso o calculo anterior do "d" seja menor que 2 este if iguala o penultimo digito a zero.*/
    
    d = d1*11 + d2*10 + d3*9 + d4*8 + d5*7 + d6*6 + d7*5 + d8*4 + d9*3 + digito1*2;
    /*Segundo calculo do que basicamente 'criptografica' os dois ultimos digitos do cpf. Neste caso esse é o calculo do ultimo digito do cpf.*/
    
    d=d%11;
    digito2=11-d;
    /*Aqui esta o resultado do ultimo digito do cpf caso ele não seja menor que 2.*/
    
    if(d<2){
        digito2=0;
    }
    /*Caso o calculo anterior do "d" seja menor que 2 este if iguala o ultimo digito a zero.*/
    
    cout << "O CPF obtido com os numeros e: " << d1 << d2 << d3 << "." << d4 << d5 << d6 << "." << d7 << d8 << d9 << "-" << digito1 << digito2;
    /*Finalizando o codigo 'cout' mostra o resultado final do cpf completo.*/
    
    return 0;
}
