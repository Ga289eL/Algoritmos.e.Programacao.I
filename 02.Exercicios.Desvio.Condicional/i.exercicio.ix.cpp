//Faça um programa que solicita ao usuário seu nome e as notas de três provas.
//Calcule a média aritmética e informe se o aluno foi Aprovado ou Reprovado (o aluno é considerado aprovado com a média igual ou superior a 6).
//Saídas:
//- Pedido ao usuário = "Digite as notas a seguir:";
//- Caso nota maior que 6 = “Você foi aprovado”;
//- Caso nota menor que 6 = ”Você foi reprovado”

#include <iostream>
using namespace std;

int main(){
  
    char nome[35];
    float nt1, nt2, nt3, media;

    cout<<"Digite seu nome: ";
    cin>>nome;

    cout<<"Digite suas três notas: ";
    cin>>nt1>>nt2>>nt3;

    media=(nt1+nt2+nt3)/3;

    if(media>=6){
        cout<<"Você foi aprovado";
    } else{
        cout<<"Você foi reprovado";
    }

    return 0;
}
