#include <iostream>
#include <string>
#include "livro.h"

using namespace std;


int main(){

	Livro* l;

	l = criar(400, "HP E PEDRA FILOSOFAL");

	cadastrar_autor(l, "Guilherme Lima");

	cout << "Nome do livro: " << livro_title(l) << endl << "Numero de paginas do livro: "  << num_pages(l) << endl << "Autor do livro: " <<name_autor(l) << endl;


	return 0;

}