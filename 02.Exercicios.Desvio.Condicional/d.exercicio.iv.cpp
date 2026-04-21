//Faça um programa que solicita a data de nascimento de uma pessoa e a data atual e exiba a idade desta pessoa em anos
//(A data deve ser armazenada em 3 variáveis inteiras para ano, mês e dia).

#include <iostream>
using namespace std;

int main(){
    
    int datual,matual,aatual,dnasci,mnasci,anasci,idade;
    char barra; //char come a 'barra' na hora de preencher a data como "DD/MM/AAAA".
    
    cout<<"Digite Data de Hoje: ";
    cin>>datual>>barra>>matual>>barra>>aatual;
    cout<<"Digite Data de Nascimento: ";
    cin>>dnasci>>barra>>mnasci>>barra>>anasci;
    
    idade=aatual-anasci;
    
    if(matual<mnasci||matual==mnasci&&datual<dnasci){
        idade=idade-1;
        cout<<"Você tem "<<idade<<" anos";
    } else{
        cout<<"Você tem "<<idade<<" anos";
    }
    
    return 0;
}
