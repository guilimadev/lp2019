#include <iostream>
#include <string>
#include "livro.h"

using namespace std;


struct livro
{
	string autor;
	int num_paginas;
	string titulo;
};

livro* criar(int paginas, string nome_livro){
	Livro* l =  new Livro();

	if(l == NULL){
        cout << "Memória insuficiente!" << endl;
        exit(1);
    }

    l->num_paginas = paginas;
    l->titulo = nome_livro;

    return l;

}

int num_pages(livro* l){
	return l->num_paginas;
}	

string livro_title(livro* l){
	return l->titulo;
}

void cadastrar_autor(livro* l, string nome_autor){
	l->autor = nome_autor;
}

string name_autor(livro* l){
	return l->autor;
}