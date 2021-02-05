#include <iostream>
#include "Partida.hpp"
#include "Jogador.hpp"

using namespace std;

int main() {

	int numero_cartas_por_jogador;
	int numero_jogadores;

	//recebe numero de jogadores e numero de cartas por jogador
	cin >> numero_jogadores;
	cin >> numero_cartas_por_jogador;

	Partida *p = new Partida(numero_jogadores);

	string nomeJogador;
	int numero_pontos_carta;
	string naipe;

	//recebe o nome do jogador - i-jogadores
	for (int i = 0; i < numero_jogadores; i++) {
		cin >> nomeJogador;
		p->addJogadorLista(nomeJogador);

		//recebe o numero de cartas e seu naipe - j-cartas
		for (int j = 0; j < numero_cartas_por_jogador; j++) {
			cin >> numero_pontos_carta;
			cin >> naipe;
			p->addJogadorCarta(nomeJogador, numero_pontos_carta, naipe);
		}
		p->setNumAtualJogadores(p->getNumAtualJogadores() + 1);
	}

	//imprime jogadores em ordem crescente
	p->imprimeJogadoresOrdenados();

	Jogador vencedor = p->getCampeao();
	cout << vencedor.getNomeJogador() << endl;
	return 0;
}
