// Paciente.h

#include <iostream>
#include <conio.h>

using namespace std;

class Paciente {
	private:
		int id;
		string nome;
		int idade;
		
	public:
		Paciente(int, string, int);
		
		int getId() {
			return this->id;
		};
		
		string getNome() {
			return this->nome;
		};
		
		int getIdade() {
			return this->idade;
		}
};

void Paciente::Paciente(int id, string nome, int idade) {
	this->id = id;
	this->nome = nome;
	this->idade = idade;
}
