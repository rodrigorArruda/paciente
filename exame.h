// Exame.h

#include <iostream>
#include <conio.h>
#include "Paciente.h"

using namespace std;

class Exame : public Paciente {
	private:
		int id;
		string nome;
		int resultado;
	
	public:
		Exame(int, string, int);
		
		void setId(int id) {
			this->id = id;
		};
		
		void setNome(string nome) {
			this->nome = nome;
		}
		
		void imprimir();
};

void Exame::Exame(int id, string nome, int resultado) {
	this->id = id;
	this->nome = nome;
	this->resultado = resultado;
}

void Exame::imprimir() {
	cout << "Id Paciente: " << this->getId() << endl;
	cout << "Nome do paciente: " << this->getNome() << endl;
	cout << "Idade do paciente: " << this->getIdade() << endl;
	cout << "Id Exame: " << this->id << endl;
	cout << "Nome exame: " << this->nome << endl;
	cout << "Resultado exame: " << this->resultado << endl;
}
