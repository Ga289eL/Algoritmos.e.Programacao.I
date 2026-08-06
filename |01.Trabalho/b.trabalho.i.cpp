/* *********************************************** Verificador de CPF *********************************************
 * Criadores: Alison Brito * Daniel Rosso Strutz * Gabriel Alves Jacques * Luiz Carlos Pedro * Romulo Cesar Koppe *
******************************************************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int d;                                  //Variavel que receberá o valor do cpf até os 9 primeiros digitos
    int d1, d2, d3, d4, d5, d6, d7, d8, d9; //Variaveis para armazenar cada um dos 9 digitos individuais
    int digito1, digito2;                   //Variaveis para o calclos dos ultimos dois digitos do cpf
    
    cout<<"Insira de 8 a 9 digitos do CPF: ";
    cin>>d;
    
    if(d<0 || d>999999999) //Desvio para verificar se o numero digitado é valido
        cout<<"Valor inserido diferente do solicitado. Reinicie.";
    
    d9=d%10; //Calculos para separar os numeros do cpf
    d8=(d/10)%10;
    d7=(d/100)%10;
    d6=(d/1000)%10;
    d5=(d/10000)%10;
    d4=(d/100000)%10;
    d3=(d/1000000)%10;
    d2=(d/10000000)%10;
    d1=d/100000000;
    
    d=(d1*10+d2*9+d3*8+d4*7+d5*6+d6*5+d7*4+d8*3+d9*2)%11; //Calculo para descobrir o resuldado do penultimo digito do cpf
    digito1=11-d;
    
    if(d<2) //Desvio caso o calculo de "d" seja menor que 2
        digito1=0;
    
    d=(d1*11+d2*10+d3*9+d4*8+d5*7+d6*6+d7*5+d8*4+d9*3+digito1*2)%11; //Calculo para descobrir o resuldado do ultimo digito do cpf
    digito2=11-d;

    if(d<2) //Desvio caso o calculo de "d" seja menor que 2
        digito2=0;

    cout<<"O CPF obtido com os numeros e: ";
    cout<<d1<<d2<<d3<<"."<<d4<<d5<<d6<<"."<<d7<<d8<<d9<< "-" <<digito1<<digito2;

    return 0;
}
