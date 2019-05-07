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
	
	Empresa(){
		
	}
	Empresa(string nome, string cnpj2){
		name = nome;
		cnpj = cnpj2;
		
	}

	void setNome(string n){
		name = n;
	}

	void setCnpj(string c){
			cnpj = c;
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
		for(size_t i = 0; i < funcionarios.size(); ++i){
			
			cout << "Funcionario " << z << " - "<< funcionarios[i] << endl;
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
	int opcao1;
	
	std::vector<Empresa> e;
	while(opcao1 != 0){
		
		cout << endl << "MENU INICIAL - Escolha a opcao: " << endl;
		cout << "[1] - Criar Empresa" << endl;
		cout << "[2] - Ver Empresas Criadas" << endl;
		cout << "[0] - Fechar programa" << endl;
		cin >> opcao1;
		
		if (opcao1 == 1)
		{
			Empresa temp;
			string nametemp;
			string cnpjtemp;
	
			cout << "Digite o nome da empresa: " << endl;
			cin >> nametemp;
			cout << "Digite o CNPJ da empresa: " << endl;
			cin >> cnpjtemp;
	
			temp.setNome(nametemp);
			temp.setCnpj(cnpjtemp);
			
			e.emplace_back(temp);

			cout << "-------------- EMPRESA CRIADA --------------" << endl;
		}

		if (opcao1 == 2){			
			int opcao2 = 99;
			while(opcao2 != 0){
				int z = 1;
				cout << endl << endl << "-------------- LISTA DE EMPRESAS --------------" << endl;

				for(auto i : e){
					
					cout << "Codigo [" << z << "] - " << i;
					z++;
					
				}
				
				cout << "-------------- LISTA DE EMPRESAS -------------- " << endl;

				cout << endl << "MENU EMPRESA - Escolha a opcao: " << endl;
				cout << "[1] - Ver empresa" << endl;							
				cout << "[0] - Voltar para o MENU INICIAL" << endl;			
				cin >> opcao2;

				if(opcao2 == 1){					
					int opcao3 = 9999;
					int opcao4 = 9999;
					while(opcao3 != 0){

						int z = 1;
						cout << endl << endl << "-------------- LISTA DE EMPRESAS --------------" << endl;

						for(auto i : e){
							
							cout << "Codigo [" << z << "] - " << i;
							z++;
							
						}
					
					cout << "-------------- LISTA DE EMPRESAS -------------- " << endl;
						cout << "Digite o codigo da empresa para ver suas informacoes- DIGITE 0 PARA RETORNAR" << endl;
						cin >> opcao3;
								
						if(opcao3 == 0){
							break;
						}
						cout << endl << endl << e.at(opcao3-1);

						cout << endl << "MENU EMPRESA - Escolha a opcao: " << endl;
						cout << "[1] - Adicionar funcionario" << endl;							
						cout << "[0] - Voltar para o MENU INICIAL" << endl;			
						cin >> opcao4;

					

						if(opcao4 == 1){
					
							string nometemp;
							float salariotemp;
							string cpftemp;
							cout << "Entre o nome do funcionario " << endl;
							cin >> nometemp;
							cout << "Entre o salario do funcionario " << endl;
							cin >> salariotemp;
							cout << "Entre o cpf do funcionario " << endl;
							cin >> cpftemp;

							Funcionario tempfunc(nometemp, salariotemp, cpftemp);
							e.at(opcao3-1).add_func(tempfunc);

						}							

					}
				}

			}	

		}
		else if(opcao1 != 1 and opcao1 != 2 and opcao1 != 0){
			cout << "Entre uma opcao valida!" << endl;
		}
	}
}