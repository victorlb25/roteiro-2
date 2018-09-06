#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main(){

    TrabalhadorAssalariado trab1("Bruno",6000);
    TrabalhadorPorHora trab2("Pedro",40);

    cout << trab1.calcularPagamentoSemanal() << endl;
    cout << trab2.calcularPagamentoSemanal(39) << endl;
    trab2.setSalario(0);
    cout << trab2.calcularPagamentoSemanal(40) << endl;
    trab2.setSalario(0);
    cout << trab2.calcularPagamentoSemanal(41) << endl;

    return 0;
}
