#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class Jogador{
	public:
	string nome;
	string simbolo;

	Jogador(string nome, string s){
		this->nome = nome;
		this->simbolo = s;
	}
};

int main(){
	string tabuleiro[3][3];
	
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			
			tabuleiro[i][j] = " ";
			
		}
	}

	string x1;
	string x2;
	cout << "Entre o nome do Jogador 1, esse jogador sera o X: ";
	cin >> x1;
	cout << "Entre o nome do Jogador 2, esse jogador sera o O: ";
	cin >> x2;

	Jogador j1(x1, "x");
	Jogador j2(x2, "o");

	
	for (int i = 0; i < 3; ++i)
	{
		if(i == 0){
			cout << "0" << " | " << "1" << " | " << "2" << endl;
		}
		for (int j = 0; j < 3; ++j)
		{
			if(j == 2){
				cout << tabuleiro[i][j];
			}
			else{
				cout << tabuleiro[i][j] << " | ";
			}
		}
		cout << " | " << i << endl;
	}

	int posx;
	int posy; 
	bool valida = false;

	for(int i = 0; i < 9; i++){

		while(!valida){
			cout << j1.nome << " sua vez de jogar!" << endl;
			cout << "Posicao no eixo x: " << endl;
			cin >> posx;
			cout << "Posicao no eixo y: " << endl;
			cin >> posy;

			if(tabuleiro[posx][posy] != " " or posx > 2 or posx < 0 or posy > 2 or posy < 0){
				cout << endl << "Jogada invalida, jogue de novo: " << endl;

			}			
			else{
				valida = true;
			}
			
		}

		valida = false;	
		tabuleiro[posx][posy] = j1.simbolo;



		cout << endl << endl;
		for (int i = 0; i < 3; ++i)
		{
			if(i == 0){
				cout << "0" << " | " << "1" << " | " << "2" << endl;
			}
			for (int j = 0; j < 3; ++j)
			{
				if(j == 2){
					cout << tabuleiro[i][j];
				}
				else{
					cout << tabuleiro[i][j] << " | ";
				}
			}
			cout << " | " << i << endl;
		}

		if(tabuleiro[0][0] == tabuleiro[0][1] and tabuleiro[0][1] == tabuleiro[0][2] and tabuleiro[0][0] != " " or tabuleiro[1][0] == tabuleiro[1][1] and tabuleiro[1][1] == tabuleiro[1][2] and tabuleiro[1][0] != " " or tabuleiro[2][0] == tabuleiro[2][1] and tabuleiro[2][1] == tabuleiro[2][2] and tabuleiro[2][0] != " " or tabuleiro[0][0] == tabuleiro[1][0] and tabuleiro[1][0] == tabuleiro[2][0] and tabuleiro[0][0] != " " or 	tabuleiro[1][0] == tabuleiro[1][1] and tabuleiro[1][1] == tabuleiro[1][2] and tabuleiro[1][0] != " " or tabuleiro[2][0] == tabuleiro[2][1] and tabuleiro[2][1] == tabuleiro[2][2] and tabuleiro[2][0] != " " or tabuleiro[0][0] == tabuleiro[1][1] and tabuleiro[1][1] == tabuleiro[2][2] and tabuleiro[0][0] != " "){

			if(tabuleiro[0][0] == j1.simbolo){
				cout << j1.nome << " venceu o jogo!" << endl;
				break;
			}

			else{
				cout << j2.nome << " venceu o jogo!" << endl;
				break;
			}
		}

		while(!valida){
			cout << j2.nome << " sua vez de jogar!" << endl;
			cout << "Posicao no eixo x: " << endl;
			cin >> posx;
			cout << "Posicao no eixo y: " << endl;
			cin >> posy;

			if(tabuleiro[posx][posy] != " "){
				cout << "Jogada invalida, jogue de novo: " << endl;

			}
			if(posx > 2 or posx < 0 or posy > 2 or posy < 0){
				cout << "Jogada invalida, jogue de novo: " << endl;
			}

			valida = true;
		}

		valida = false;
		tabuleiro[posx][posy] = j2.simbolo;

		cout << endl << endl;
		for (int i = 0; i < 3; ++i)
		{
			if(i == 0){
				cout << "0" << " | " << "1" << " | " << "2" << endl;
			}
			for (int j = 0; j < 3; ++j)
			{
				if(j == 2){
					cout << tabuleiro[i][j];
				}
				else{
					cout << tabuleiro[i][j] << " | ";
				}
			}
			cout << " | " << i << endl;
		}

		cout << endl << endl;

		if(tabuleiro[0][0] == tabuleiro[0][1] and tabuleiro[0][1] == tabuleiro[0][2] and tabuleiro[0][0] != " " or tabuleiro[1][0] == tabuleiro[1][1] and tabuleiro[1][1] == tabuleiro[1][2] and tabuleiro[1][0] != " " or tabuleiro[2][0] == tabuleiro[2][1] and tabuleiro[2][1] == tabuleiro[2][2] and tabuleiro[2][0] != " " or tabuleiro[0][0] == tabuleiro[1][0] and tabuleiro[1][0] == tabuleiro[2][0] and tabuleiro[0][0] != " " or 	tabuleiro[1][0] == tabuleiro[1][1] and tabuleiro[1][1] == tabuleiro[1][2] and tabuleiro[1][0] != " " or tabuleiro[2][0] == tabuleiro[2][1] and tabuleiro[2][1] == tabuleiro[2][2] and tabuleiro[2][0] != " " or tabuleiro[0][0] == tabuleiro[1][1] and tabuleiro[1][1] == tabuleiro[2][2] and tabuleiro[0][0] != " "){

			if(tabuleiro[0][0] == j1.simbolo){
				cout << j1.nome << " venceu o jogo!" << endl;
				break;
			}

			else{
				cout << j2.nome << " venceu o jogo!" << endl;
				break;
			}
		}
	}

	return 0;
}