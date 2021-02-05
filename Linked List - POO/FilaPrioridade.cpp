#include "No.hpp"
#include "FilaPrioridade.hpp"

#include <iostream>

using namespace std;

FilaPrioridade::FilaPrioridade() {
	this->cabeca = nullptr;
	this->tamanho = 0;
}

void FilaPrioridade::inserir(int prioridade, int dado) {
	No *novoNo = new No(0, 0, nullptr);
	novoNo->setDado(dado);
	novoNo->setPrioridade(prioridade);
	//se a fila estiver vazia
	if (!estaVazio()) {
		this->cabeca = novoNo;
		this->tamanho++;
		return;
	}
	//se o unico termo for maior que o que esta sendo inserido
	if (this->cabeca->getPrioridade() > prioridade && cabeca->getProximo() == nullptr) {
		novoNo->setProximo(this->cabeca);
		this->cabeca = novoNo;
		this->tamanho++;
		return;
	}
	//se o primeiro for maior - vira cabeca direto
	if (this->cabeca->getPrioridade() > prioridade && cabeca->getProximo() != nullptr) {
		novoNo->setProximo(this->cabeca);
		this->cabeca = novoNo;
		this->tamanho++;
		return;
	}
	//se o primeiro for igual ao que esta entrando
	if (this->cabeca->getPrioridade() == prioridade) {
		//so tem a cabeca
		if (this->cabeca->getProximo() == nullptr) {
			this->cabeca->setProximo(novoNo);
		}
		//o segundo tbm é igual? não
		if (this->cabeca->getProximo()->getPrioridade() != prioridade) {
			novoNo->setProximo(cabeca->getProximo());
			this->cabeca->setProximo(novoNo);
			this->tamanho++;
			return;
			//e se o segundo for igual tbm(vira o terceiro):
		} else {
			this->cabeca->getProximo()->setProximo(novoNo);
			this->tamanho++;
			return;
		}
	}

	//se o primeiro for menor, encontrar lugar para ele
	if (this->cabeca->getPrioridade() < prioridade) {
		No *atual = cabeca;
		while (atual->getProximo() != nullptr && atual->getProximo()->getPrioridade() < novoNo->getPrioridade()) {
			atual = atual->getProximo();
		}
		novoNo->setProximo(atual->getProximo());
		atual->setProximo(novoNo);
		tamanho++;
		return;
	}
}

//remove o primeiro nó e retorna o seu conteúdo
int FilaPrioridade::remover() {
	No *auxiliar = this->cabeca;
	int auxdado = 0;
	auxdado = this->cabeca->getDado();
	this->cabeca = auxiliar->getProximo();
	delete auxiliar;
	tamanho--;
	return auxdado;
}

int FilaPrioridade::estaVazio() {
	if (this->tamanho == 0)
		return 0;
	else {
		return 1;
	}
}

int FilaPrioridade::getTamanho() {
	return tamanho;
}

int FilaPrioridade::getMeio() {
	No *atual = cabeca;
	int nMeio = tamanho / 2;
	int i = 0;
	while (i < nMeio) {
		atual = atual->getProximo();
		i++;
	}
	nMeio = atual->getDado();
	return nMeio;
}

int FilaPrioridade::getUltimo() {
	No *atual = cabeca;
	int nUltimo = tamanho;
	int i = 1;
	while (i < nUltimo) {
		atual = atual->getProximo();
		i++;
	}
	nUltimo = atual->getDado();
	return nUltimo;
}

void FilaPrioridade::print() {
	No *atual = cabeca;
	int ultimo = tamanho;
	int i = 1;
	while (i <= ultimo) {
		cout << atual->getDado();
		cout << " ";
		atual = atual->getProximo();
		i++;
	}
}
/** Esse método insere um nó com o dado passado como parâmetro na primeira posição da fila.
 * Uma forma simples de furar a fila é criar um valor de prioridade maior do que a prioridade da cabeça da fila;
 */
void FilaPrioridade::furaFila(int dado) {
	//pega a prioridade do primeiro da fila e faz prioridade -1;
	this->inserir(-1000, dado);
}
