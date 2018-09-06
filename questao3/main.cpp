#include <iostream>
#include "funcionario.h"
#include "consultor.h"

using namespace std;

int main(){

    Funcionario funcionario("20170059311","victor",2500);
    Consultor consultor("20142342341","bruno",2000);

    cout << funcionario.getSalario() << endl;
    cout << funcionario.getNome() << endl;
    cout << funcionario.getMatricula() << endl;
    cout << funcionario.returnString() << endl;

    cout << consultor.getSalario(0.1) << endl;
    cout << consultor.getNome() << endl;
    cout << consultor.getMatricula() << endl;
    cout << consultor.returnString() << endl;

    return 0;
}
