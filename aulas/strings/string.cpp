#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string x;
	string z;

	getline(cin, x);
	getline(cin, z);


	cout << "Palavras: " << x << " e " << z << endl;

	
	if(x == z){
		cout << "As strings são iguais" << endl;
	}
	else{
		cout << "As strings são diferentes" << endl;
	}
	

	string y = x+z;

	cout << "Y: " << y << endl;

	return 0;
}