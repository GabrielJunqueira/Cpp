#include <iostream>
#include <iomanip>
#include <string>
#include "Indice.hpp"
using namespace std;
#include <vector>
#include <bits/stdc++.h>

int main() {

	float contador = 0;
	int contador2 = 0;
	int vcontadores[30];
	string linha;

	for (int i = 0; i < 30; i++) {
		vcontadores[i] = 0;
	}

	// Pega todas as palavras do input - coloca em textoCompleto
	string textoCompleto;

	do {
	    getline(cin,linha);
	    textoCompleto += linha + '\n';
	  } while (!linha.empty());

	// Passa as palavras de textoCompleto para um vector de strings
	vector<string> palavras;
	string palavra;
	istringstream iss(textoCompleto);

	while (iss >> palavra) {
		contador++;
		if (palavra.length() >= 3)
			palavras.push_back(palavra);
	}

	vector<string> auxiliar;
	string word;
	istringstream iss2(textoCompleto);

	while (iss2 >> word) {
		contador2++;
		auxiliar.push_back(word);
	}

	//descobre se ha palavras repetidas e apaga, caso haja
	for (int i = 0; i < palavras.size(); ++i) {
		for (int j = i + 1; j < palavras.size();) {
			if (palavras[i] == palavras[j]) {
				palavras.erase(palavras.begin() + j);
			} else
				++j;
		}
	}

	//ordena - ordem alfabetica
	sort(palavras.begin(), palavras.end());

	for (int i = 0; i < palavras.size(); i++) {
		for (int j = 0; j < auxiliar.size(); j++) {
			if (palavras[i] == auxiliar[j])
				vcontadores[i]++;
		}
	}

	cout << fixed << showpoint;
	cout << setprecision(2);

	for (int i = 0; i < palavras.size(); i++) {
		cout << palavras[i] << " " << vcontadores[i] << " " << vcontadores[i] / contador << endl;
	}

}
