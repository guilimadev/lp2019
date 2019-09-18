#include <iostream>
#include <string>

using namespace std;

class carro
{
private:
	string cor;
	int num_portas;
	float velocidade;
	string placa;
	
public:	

	void set_cor(string color){
		this->cor = color;
	}
	string get_cor(){
		return this->cor;
	}

	void set_portas(int portas){
		this->num_portas = portas;
	}
	int get_portas(){
		return this->num_portas;
	}

	void set_placa(string placa){
		this->placa = placa;
	}
	string get_placa(){
		return this->placa;
		
	}

	void acelerar(){
		velocidade = velocidade + 5.0;
	}

	void frear(){
		velocidade = velocidade - 5.0;
	}


	float get_velocidade(){
		return velocidade;
	}

};


int main(){

	carro c;
	c.set_placa("DWADWA");
	c.set_portas(5);
	c.set_cor("Branca");

	c.acelerar();
	c.acelerar();
	c.acelerar();
	c.acelerar();
	c.acelerar();

	cout << c.get_placa() << endl << c.get_velocidade() << endl;
	
	c.frear();
	c.frear();

	cout << c.get_placa() << endl << c.get_velocidade() << endl;
	
	return 0;
}