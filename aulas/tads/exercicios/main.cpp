#include <iostream>
#include "banktad.h"

using namespace std;

int main(){
	Conta* c;

	c = criar(14525, 352.0);

	imprimir_saldo(c);

	deposito(c, 800.0);


	imprimir_saldo(c);

	saque(c,2000);

	imprimir_saldo(c);

	return 0;
}