#include "Jogador.hpp"
#include "Carta.hpp"

Jogador::Jogador() {
	this->_nomeJogador = "";
	this->_totalPontos = 0;
}

void Jogador::adicionaCarta(Carta carta) {
	this->_cartas.push_back(carta);
}

string Jogador::getNomeJogador() {
	return this->_nomeJogador;
}

void Jogador::setNomeJogador(string nome) {
	this->_nomeJogador = nome;
}

void Jogador::calcularPontuacao() {
	int total_pontos = 0;
	for (auto &c : this->_cartas) {
		total_pontos += c.getTotalPontos();
	}
	this->setTotalPontos(total_pontos);
}

vector<Carta> Jogador::getCartas() {
	return this->_cartas;
}

void Jogador::setCartas(vector<Carta> cartas) {
	this->_cartas = cartas;
}

int Jogador::getTotalPontos() {
	return _totalPontos;
}

void Jogador::setTotalPontos(int totalPontos) {
	this->_totalPontos = totalPontos;
}
