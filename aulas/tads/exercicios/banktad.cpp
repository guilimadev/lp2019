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

	c->numero_conta = numero;
	c->saldo_conta = saldo;

	return c;
}

void deposito(Conta* c, float valor_deposito){
	if(valor_deposito < 0){
		cout << "Valor do deposito invalido" << endl;
		return;
	}
	c->saldo_conta = c->saldo_conta + valor_deposito;
	cout << "Deposito realizado de: " << valor_deposito << endl;
}	

void saque(Conta* c, float valor_saque){
	if(valor_saque > c-> saldo_conta or valor_saque < 0){
		cout << "Valor do saque invalido" << endl;
		return;
	}
	c->saldo_conta = c->saldo_conta - valor_saque;
	cout << "Saque realizado de: " << valor_saque << endl;

}

void imprimir_saldo(Conta* c){
	cout << "Saldo: " << c->saldo_conta << endl;
} 




