typedef struct livro Livro;

#include <string>
using namespace std;

livro* criar(int paginas, string nome_livro);

int num_pages(livro* l);		

string livro_title(livro* l);

void cadastrar_autor(livro* l, string nome_autor);

string name_autor(livro* l);