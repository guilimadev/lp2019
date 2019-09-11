#include <iostream>
#include "banktad.h"

using namespace std;

int main(){
	Conta* c;

	c = criar(14525, 352.0);

	imprimir_saldo(c);



	return 0;
}