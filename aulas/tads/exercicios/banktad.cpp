#include <iostream>
#include "banktad.h"

struct conta{
	int numero_conta;
	float saldo_conta;
};


using namespace std;

Conta* criar(int numero, float saldo){
	Conta* c =  new Conta();

	if(c == NULL){
        cout << "Memória insuficiente!" << endl;
        exit(1);
    }

	c->numero_conta = numero_conta;
	c->saldo_conta = saldo;

	return c;
}

void deposito(float valor_deposito){
	saldo_conta = saldo_conta + valor_deposito;
}

void saque(float valor_saque){
	saldo_conta = saldo_conta - valor_saque;
}

void imprimir_saldo(Conta* c){
	cout << "Saldo: " << c->saldo_conta << endl;
} 




