/**************************************************************************************
 * ***************************** Verificador de CPF ***********************************
 * Criadores: Alison Brito * Daniel Rosso * Gabriel Alves * Luiz Carlos * Romulo Cesar*
 * **************************        VERSAO 2.0       *********************************
**************************************************************************************/

#include <iostream>

int main() {
    using namespace std;
    int i, i1, i2, i3, i4, i5, i6, i7, i8, i9, digito1, digito2;

    cout << "Insira um numero de oito ou nove digitos: ";
    cin >> i; /*Supondo que o CPF comece com 123456789*/

    if (i > 99999 && i <= 999999999) {
        i9 = i % 10; i /= 10; /*Modulo de 10 seria 9, pois a conta dari 12345678,9. Logo em seguida o "i" é dividido por 10 ficando 12345678*/
        i8 = i % 10; i /= 10; /*Modulo de 10 seria 8, pois a conta dari 1234567,8. Logo em seguida o "i" é dividido por 10 ficando 1234567*/
        i7 = i % 10; i /= 10; /*Modulo de 10 seria 7, pois a conta dari 123456,7. Logo em seguida o "i" é dividido por 10 ficando 123456*/
        i6 = i % 10; i /= 10; /*Modulo de 10 seria 6, pois a conta dari 12345,6. Logo em seguida o "i" é dividido por 10 ficando 12345*/
        i5 = i % 10; i /= 10; /*Modulo de 10 seria 5, pois a conta dari 1234,5. Logo em seguida o "i" é dividido por 10 ficando 1234*/
        i4 = i % 10; i /= 10; /*Modulo de 10 seria 4, pois a conta dari 123,4. Logo em seguida o "i" é dividido por 10 ficando 123*/
        i3 = i % 10; i /= 10; /*Modulo de 10 seria 3, pois a conta dari 12,3. Logo em seguida o "i" é dividido por 10 ficando 12*/
        i2 = i % 10; i /= 10; /*Modulo de 10 seria 2, pois a conta dari 1,2. Logo em seguida o "i" é dividido por 10 ficando 1*/
        i1 = i; /*Como so restou 1 entao acaba que as divisoes acabam*/

        digito1 = i1*10 + i2*9 + i3*8 + i4*7 + i5*6 + i6*5 + i7*4 + i8*3 + i9*2;

        if (digito1 % 11 < 2) {
            digito1 = 0;
        } else {
            digito1 = 11 - (digito1 % 11);
        }

        digito2 = i1*11 + i2*10 + i3*9 + i4*8 + i5*7 + i6*6 + i7*5 + i8*4 + i9*3 + digito1*2;

        if (digito2 % 11 < 2) {
            digito2 = 0;
        } else {
            digito2 = 11 - (digito2 % 11);
        }

        cout << "O CPF obtido com os numeros é: " << i1 << i2 << i3 << "." << i4 << i5 << i6 << "." << i7 << i8 << i9 << "-" << digito1 << digito2 << "\n";
    } else if (i < 99999) {
        cout << "Você inseriu um numero menor, reinicie o programa.\n";
    } else {
        cout << "Você inseriu um numero maior, reinicie o programa.\n";
    }
    
    return 0;
}
