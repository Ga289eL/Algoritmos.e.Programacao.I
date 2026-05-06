//Faça um programa que solicita 20 valores inteiros e exiba quantos são pares e quantos são ímpares.

#include <iostream>
using namespace std;

int main() {

    int numero, par=0, impar=0;

    int i;
    for(i=1; i <= 20; i++){ //n�mero de valores
        cout << "Digite o " << i << "º numero: ";
        cin >> numero;
        if (numero % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    cout << "\nO total de numeros pares foi de: " << par;
    cout << "\nO total de numeros impares foi de: " << impar;

    return 0;
}
