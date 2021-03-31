#include "Estudante.hpp"
#define ESTUDANTE_H
#include <string>

float Estudante::calcularRSG(){
	float soma = 0;
	for(int i = 0; i < 5; i++){
		soma = soma + notas[i];
	}
	return soma/5;
}
