#ifndef PONTO_H
#define PONTO_H
#include <iostream>
#include <string>

/**
 * \Interface que representa cada ponto, independente de sua dimens�o.
 */
class Ponto {
public:
	/**
	 * \Representa��o de string do ponto.
	 * \retorna uma string que representa o ponto, como uma tupla de n-dimens�es.
	 */
	virtual std::string to_string() const = 0;
	/**
	 * \Computa a dist�ncia entre o Ponto armazenado no objeto e o Ponto passado por par�metro (se possuem a mesma dimens�o)
	 */
	virtual double distancia(Ponto *p) const = 0;
	/**
	 * Retorna um inteiro que representa a dimens�o do ponto.
	 */
	virtual int getDimensao() const = 0;
	/**
	 * \o destruidor virtual (ou ent�o o compilador ir� criar um para voc�).
	 */
	virtual ~Ponto() {
	}
	;
};

#endif
