#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class Funcionario {
	string name;
	float salary;
	time_t admission; 
	string CPF;
public:
	Funcionario(){
		name = "Guilheme";
		salary = 1000.5;
		CPF = "4563516513";
	}
	Funcionario(string x, float salario, string cpf){
		name = x;
		salary = salario;
		CPF = cpf;
	}

	friend ostream & operator << (ostream& out, const Funcionario& x){
		out << "Nome: " << x.name << " | CPF: " << x.CPF;
		return out;
	}

	friend bool operator == (const Funcionario& a, const Funcionario& b){
		if(a.CPF == b.CPF){
			return true;
		}
		else{
			return false;
		}
	}
};

class Empresa {
	string name;
	string cnpj;
	std::vector<Funcionario> funcionarios;

public:
	Empresa(string nome, string cnpj2){
		name = nome;
		cnpj = cnpj2;
	}
	void add_func(Funcionario x){
		for(std::vector<Funcionario>::const_iterator i = funcionarios.begin(); i != funcionarios.end(); i++){
			
			if(x == *i){
				cout << "Funcionario ja cadastrado" << endl << endl;
				return;
			}
			
		}
		funcionarios.emplace_back(x);
	}

	void print_func(){
		int z = 1;
		for(std::vector<Funcionario>::const_iterator i = funcionarios.begin(); i != funcionarios.end(); i++){
			
			cout << "Funcionario " << z << " - "<< *i << endl;
			z++;
		}
	}

	friend ostream & operator << (ostream &os, Empresa &x){
		os << "Empresa: " << x.name << endl;
		x.print_func();
		return os;	
	}
	
};

int main(){
	
	Empresa a("Coca-Cola", "754.654.456/001-89");
	Funcionario g;
	Funcionario x("Pedro", 9090.6, "10073119407");
	a.add_func(g);
	a.add_func(x);
	a.add_func(x);
	cout << a;
}