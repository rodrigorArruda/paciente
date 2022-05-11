#include <iostream>
#include <conio.h>
#include <string>

#include "Exame.h"

using namespace std;

void verificaPacienteMaisNovo(Paciente, Paciente);

int main() {
	Paciente p1 = new Paciente(1, "Almir Camolesi", 18);
	Paciente p2 = new Paciente(2, "Rodrigo Arruda", 24);
	
	Exame e1 = new Exame(10, "Insulina", 175);
	e1->imprimir();
	
	cout << "O paciente mais novo e a(o) " << verificaPacienteMaisNovo(p1, p2);
}

String verificaPacienteMaisNovo(Paciente p1, Paciente p2) {
	if (p1->getIdade() > p2->getIdade()) {
		return p1->getNome();
	} else {
		return p2->getNome();
	}
}
