/******************************************************************************************************************
 * *********************************************** Verificador de CPF *********************************************
 * Criadores: Alison Brito * Daniel Rosso Strutz * Gabriel Alves Jacques * Luiz Carlos Pedro * Romulo Cesar Koppe *
 * *******************************************        VERSAO 2.0       ********************************************
******************************************************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int i, i1, i2, i3, i4, i5, i6, i7, i8, i9, digito1, digito2;
    
    cout<<"Insira de 8 a 9 digitos do CPF: ";
    cin>>i;
    
    if(i<0 || i>999999999){
        cout<<"Valor inserido diferente do solicitado. Reinicie.";
        
        return 0;
    }
    
    i9=i%10; i=i/10;
    i8=i%10; i=i/10;
    i7=i%10; i=i/10;
    i6=i%10; i=i/10;
    i5=i%10; i=i/10;
    i4=i%10; i=i/10;
    i3=i%10; i=i/10;
    i2=i%10; i=i/10;
    i1=i;
    
    i = i1*10 + i2*9 + i3*8 + i4*7 + i5*6 + i6*5 + i7*4 + i8*3 + i9*2;
    
    i=i%11;
    digito1=11-i;
    
    if(i<2){
        digito1=0;
    }
    
    i = i1*11 + i2*10 + i3*9 + i4*8 + i5*7 + i6*6 + i7*5 + i8*4 + i9*3 + digito1*2;
    
    i=i%11;
    digito2=11-i;
    
    if(i<2){
        digito2=0;
    }
    
    cout << "O CPF obtido com os numeros e: " << i1 << i2 << i3 << "." << i4 << i5 << i6 << "." << i7 << i8 << i9 << "-" << digito1 << digito2;
    
    return 0;
}
