#ifndef JOGADOR
#define JOGADOR

#include <string>
#include <vector>
#include "Carta.hpp"
#include <bits/stdc++.h>

using namespace std;

class Jogador {
private:
	string _nomeJogador;
	vector<Carta> _cartas;
	int _totalPontos;

public:

	Jogador();
	void adicionaCarta(Carta carta);

	vector<Carta> getCartas();
	void setCartas(vector<Carta> cartas);

	string getNomeJogador();
	void setNomeJogador(string nome);

	void calcularPontuacao();

	int getTotalPontos();

	void setTotalPontos(int totalPontos);
};

#endif
