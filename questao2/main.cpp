#include <iostream>
#include "pessoa.h"
#include "endereco.h"

using namespace std;

int main(){
    Pessoa p1 = Pessoa("Bruno",Endereco("asfaltado",10,"mangabeira","joao pessoa","paraiba","53456-321"),"+55083912345678");
    Pessoa p2;

    p2.setNome("Joao");
    p2.setEndereco(Endereco("asfaltado",32,"bancarios","joao pessoa","paraiba","65778-212"));
    p2.setTelefone("+550893322-2341");

    cout << p1.getNome() << endl;
    cout << p1.printAll() << endl;
    cout << p1.printNum() << endl;
    cout << p1.getTelefone() << endl;

    cout << " " << endl;

    cout << p2.getNome() << endl;
    cout << p2.printAll() << endl;
    cout << p2.printNum() << endl;
    cout << p2.getTelefone() << endl;

    return 0;
}
