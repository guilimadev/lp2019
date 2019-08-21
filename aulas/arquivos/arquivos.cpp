#include <iostream>
#include <fstream>

using namespace std;


void escreverArquivo(string file, string texto){
	ofstream escrever(file);

	if(escrever.is_open()){
		escrever << texto << endl;
	}

	escrever.close();	
}

void lerArquivo(string file){
	ifstream ler(file);

	string arquivo;
	getline(ler, arquivo);
	
	cout << arquivo << endl;;
	
}


int main(){

	escreverArquivo("test.txt", "Testando");
	lerArquivo("test.txt");


}