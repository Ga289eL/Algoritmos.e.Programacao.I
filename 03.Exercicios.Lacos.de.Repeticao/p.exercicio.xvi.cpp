//Solicite ao usuário a digitação de um número inteiro, calcule e exiba o fatorial deste número

#include <iostream>
using namespace std;

int main () {

    int fatorial, numero;

    cout<<"Digite o numero a ser fatorado: ";
    cin>>numero;

    for(fatorial=1;numero>1;numero--){
            fatorial*=numero;
    }

    cout<<"o fatorial do numero digitado é "<<fatorial;
    
    return 0;
  
}
