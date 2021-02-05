#include "Partida.hpp"
#include "Jogador.hpp"
#include "Carta.hpp"
using namespace std;

Partida::Partida(int num_jogadores) {
	this->_jogadores = new Jogador[num_jogadores];
	this->_num_jogadores = num_jogadores;
	this->_atualSize = 0;
}

int Partida::getNumJogadores() {
	return this->_num_jogadores;
}

int Partida::getNumAtualJogadores() {
	return this->_atualSize;
}

void Partida::setNumAtualJogadores(int atualSize) {
	this->_atualSize = atualSize;
}

void Partida::setJogadores(Jogador *jogadores) {
	this->_jogadores = jogadores;
}

Jogador Partida::getJogadorAtual() {
	return this->getJogadores()[this->getNumAtualJogadores()];
}

void Partida::addJogadorLista(string nomeJogador) {
	Jogador *jogador = new Jogador();
	jogador->setNomeJogador(nomeJogador);
	this->_jogadores[_atualSize] = *jogador;
}

void Partida::addJogadorCarta(string nomeJogador, int numero_pontos_carta, string naipe) {

	Carta *carta = new Carta(numero_pontos_carta, naipe);
	Jogador *jogador = &this->_jogadores[_atualSize];
	jogador->adicionaCarta(*carta);
	jogador->calcularPontuacao();
}

Jogador* Partida::getJogadores() {
	return this->_jogadores;
}

Jogador Partida::getCampeao() {
	getJogadoresOrdenados();
	return _jogadores[_atualSize - 1];
}

Jogador* Partida::getJogadoresOrdenados() {
	for (int i = 0; i < _num_jogadores; ++i) {
		int menor = i;
		for (int j = i + 1; j < _num_jogadores; ++j) {
			if (_jogadores[j].getTotalPontos() < _jogadores[menor].getTotalPontos())
				menor = j;
		}

		Jogador aux = _jogadores[i];
		_jogadores[i] = _jogadores[menor];
		_jogadores[menor] = aux;

	}
	return this->_jogadores;
}

void Partida::imprimeJogadoresOrdenados() {
	getJogadoresOrdenados();
	for (int i = 0; i < _num_jogadores; i++) {
		cout << this->_jogadores[i].getNomeJogador() << " " << _jogadores[i].getTotalPontos() << endl;
	}
}
