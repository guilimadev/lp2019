typedef struct conta Conta;

Conta* criar(int numero_conta, float saldo_conta);

void deposito(Conta* c, float valor_deposito);		

void saque(Conta* c,float valor_saque);

void imprimir_saldo(Conta* c);