#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		      << "  Endereço: " << endereco << endl
		      << "  Cidade: " << CIDADE << endl
		      << "  Estado: " << ESTADO << endl
		      << "  CEP: " << cep << endl;
}
