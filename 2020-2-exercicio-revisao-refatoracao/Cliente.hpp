#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {

private:

	string NOME;
	string endereco;
	string CIDADE;
	string ESTADO;
	string cep;

public:

	Cliente() {}

	//construtor
	Cliente(string _nome, string _endereco, string _cidade, string _estado,  string _cep) {
		this->NOME = _nome;
		this->endereco = _endereco;
		this->CIDADE = _cidade;
		this->ESTADO = _estado;
		this->cep = _cep;
	}

	//Getter e Setter para o NOME
	void setNOME(string _NOME) {
		NOME = _NOME;
	}
	string getNOME() {
		return NOME;
	}


	//Getter e Setter para o ENDEREÇO
	void setEndereco(string _endereco) {
		endereco = _endereco;
	}
	string getEndereco() {
		return endereco;
	}


	//Getter e Setter para a CIDADE
	void setCIDADE(string _CIDADE) {
		CIDADE = _CIDADE;
	}
	string getCIDADE() {
		return CIDADE;
	}


	//Getter e Setter para o ESTADO
	void setESTADO(string _ESTADO) {
		ESTADO = _ESTADO;
	}
	string getESTADO() {
		return ESTADO;
	}


	//Getter e Setter para o CEP
	void setCep(string _cep) {
		cep = _cep;
	}
	string getCep() {
		return cep;
	}

	void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
