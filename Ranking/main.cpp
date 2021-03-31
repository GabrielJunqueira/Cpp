#include <iostream>
#include <iomanip>
#include "Estudante.hpp"
#define ESTUDANTE_H
#include <string>
using namespace std;

void troca(Estudante *xp, Estudante *yp) {
	Estudante temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(Estudante Grupo[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (Grupo[j].calcularRSG() <= Grupo[j + 1].calcularRSG()) {

				troca(&Grupo[j], &Grupo[j + 1]);
			}
}

void func2(Estudante Grupo[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (Grupo[j].calcularRSG() == Grupo[j + 1].calcularRSG()) {
				if (Grupo[j].matricula > Grupo[j + 1].matricula) {

					troca(&Grupo[j], &Grupo[j + 1]);
				}
			}
}

void selectionSort(Estudante Grupo[], int n) {
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++) {

		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (Grupo[j].calcularRSG() <= Grupo[min_idx].calcularRSG())
				min_idx = j;

		troca(&Grupo[min_idx], &Grupo[i]);
	}
}

int main() {

	Estudante Grupo[10];

	cin >> Grupo[0].matricula >> Grupo[0].nome >> Grupo[0].notas[0] >> Grupo[0].notas[1] >> Grupo[0].notas[2]
			>> Grupo[0].notas[3] >> Grupo[0].notas[4];
	cin >> Grupo[1].matricula >> Grupo[1].nome >> Grupo[1].notas[0] >> Grupo[1].notas[1] >> Grupo[1].notas[2]
			>> Grupo[1].notas[3] >> Grupo[1].notas[4];
	cin >> Grupo[2].matricula >> Grupo[2].nome >> Grupo[2].notas[0] >> Grupo[2].notas[1] >> Grupo[2].notas[2]
			>> Grupo[2].notas[3] >> Grupo[2].notas[4];
	cin >> Grupo[3].matricula >> Grupo[3].nome >> Grupo[3].notas[0] >> Grupo[3].notas[1] >> Grupo[3].notas[2]
			>> Grupo[3].notas[3] >> Grupo[3].notas[4];
	cin >> Grupo[4].matricula >> Grupo[4].nome >> Grupo[4].notas[0] >> Grupo[4].notas[1] >> Grupo[4].notas[2]
			>> Grupo[4].notas[3] >> Grupo[4].notas[4];
	cin >> Grupo[5].matricula >> Grupo[5].nome >> Grupo[5].notas[0] >> Grupo[5].notas[1] >> Grupo[5].notas[2]
			>> Grupo[5].notas[3] >> Grupo[5].notas[4];
	cin >> Grupo[6].matricula >> Grupo[6].nome >> Grupo[6].notas[0] >> Grupo[6].notas[1] >> Grupo[6].notas[2]
			>> Grupo[6].notas[3] >> Grupo[6].notas[4];
	cin >> Grupo[7].matricula >> Grupo[7].nome >> Grupo[7].notas[0] >> Grupo[7].notas[1] >> Grupo[7].notas[2]
			>> Grupo[7].notas[3] >> Grupo[7].notas[4];
	cin >> Grupo[8].matricula >> Grupo[8].nome >> Grupo[8].notas[0] >> Grupo[8].notas[1] >> Grupo[8].notas[2]
			>> Grupo[8].notas[3] >> Grupo[8].notas[4];
	cin >> Grupo[9].matricula >> Grupo[9].nome >> Grupo[9].notas[0] >> Grupo[9].notas[1] >> Grupo[9].notas[2]
			>> Grupo[9].notas[3] >> Grupo[9].notas[4];

	int n = 10;

	selectionSort(Grupo, n);
	bubbleSort(Grupo, n);
	func2(Grupo, n);

	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << Grupo[0].matricula << " " << Grupo[0].nome << " " << Grupo[0].calcularRSG() << endl;
	;
	cout << Grupo[1].matricula << " " << Grupo[1].nome << " " << Grupo[1].calcularRSG() << endl;
	;
	cout << Grupo[2].matricula << " " << Grupo[2].nome << " " << Grupo[2].calcularRSG() << endl;
	;

	return 0;
}
