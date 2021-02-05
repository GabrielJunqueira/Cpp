#ifndef NO
#define NO

#include <iostream>

using namespace std;

class No {
private:
	int _dado;
	No *_proximo;
	int _prioridade;
public:
	No(int prioridade, int dado, No *proximo);

	/** Seta o pr�ximo n�.
	 */
	void setProximo(No *next);
	/** Retorna o pr�ximo n�.
	 */
	No* getProximo();

	/** Retorna o dado armazenado no n�.
	 @retorna um inteiro.
	 */
	int getDado();
	/** Seta o valor do dado que ser� armazenado no n�.
	 */
	void setDado(int dado);

	/** Retorna o valor da prioridade do n�.
	 */
	int getPrioridade();
	/** Seta o valor da prioridade do n�.
	 */
	void setPrioridade(int prioridade);
};

#endif
