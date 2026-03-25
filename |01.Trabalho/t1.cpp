#include <iostream>
int main (){
	using namespace std;
	int i, i1, i2, i3, i4, i5, i6 ,i7, i8, i9, primeiroDigito, segundoDigito;
	cout << "Insira um numero de oito ou nove digitos: ";
	cin >> i;
	if (i > 999999 && i <= 999999999){
	i1 = i / 100000000;
	i = i % 100000000;
	i2 = i / 10000000;
	i = i % 10000000;
	i3 = i / 1000000;
	i = i % 1000000;
 	i4 = i / 100000;
	i = i % 100000;
	i5 = i / 10000;
	i = i % 10000;
	i6 = i / 1000;
	i = i % 1000;
	i7 = i / 100;
	i = i % 100;
	i8 = i / 10;
	i = i % 10;
	i9 = i / 1;
	i = i % 1;

     primeiroDigito = i1 * 10 + i2 * 9 + i3 * 8 + i4 * 7 + i5 * 6 + i6 * 5 + i7 * 4 + i8 * 3 + i9 * 2;
	cout << primeiroDigito << "\n";
     primeiroDigito = 11 - (primeiroDigito % 11);
     cout << primeiroDigito << "\n";
     segundoDigito =  i1 * 11 + i2 * 10 + i3 * 9 + i4 * 8 + i5 * 7 + i6 * 6 + i7 * 5 + i8 * 4 + i9 * 3 + primeiroDigito * 2;
     segundoDigito = 11 - (segundoDigito % 11);
     cout << segundoDigito << "\n";
	}
	cout << i1 << i2 << i3 << "." << i4  << i5  << i6 << "."  << i7  << i8 << i9 << "-" << primeiroDigito << segundoDigito << "\n" ;
	return 0;
}
