#ifndef FILAPRIORIDADE
#define FILAPRIORIDADE

#include <iostream>
#include "No.hpp"

using namespace std;

class FilaPrioridade {
public:
	FilaPrioridade();

	/** Essa fun��o insere um elemento na lista de prioridades, a prioridade define a posi��o desse elemento
	 * O n� com maior prioridade deve ser sempre o primeiro da lista, o de segunda maior prioridade o segundo ...
	 * Maior prioridade significa menor inteiro (ent�o um dado com atributo prioridade 1 vem antes de um dado com atributo prioridade 2)
	 * O segundo par�metro - dado - � a informa��o armazenada no n�.
	 */
	void inserir(int prioridade, int dado);
	/** Essa fun��o remove o primeiro n� da lista (pois � o de maior prioridade (menor inteiro)), e retorna o valor do dado armazenado no n�.
	 @retorna a prioridade do primeiro n� da lista.
	 */
	int remover();
	/** Esse m�todo indica se a lista est� vazia.
	 @retorna verdadeiro se a lista est� vazia, e falso caso contr�rio.
	 */
	int estaVazio();
	/** Informa o n�mero de elementos da lista.
	 @retorna um inteiro n, onde n � o n�mero de n�s da lista.
	 */
	int getTamanho();
	/** Retorna o dado do n� que est� no meio da lista.
	 * Se a lista possui 2*n ou 2*n + 1 elementos, ent�o o elemento do meio �
	 * o que est� no �ndice n, assumindo que o primeiro �ndice � 0.
	 @retorna o elemento do meio da lista.
	 */
	int getMeio();
	/** Retorna o dado do n� do �ltimo elemento da lista (o n� com menor prioridade (maior inteiro)).
	 @retorna o inteiro armazenado no �ltimo n� da lista.
	 */
	int getUltimo();
	/** Esse m�todo insere um n� com o dado passado como par�metro na primeira posi��o da fila.
	 * Uma forma simples de furar a fila � criar um valor de prioridade maior do que a prioridade da cabe�a da fila;
	 */
	void furaFila(int dado);
	void print();
private:
	No *cabeca; /// Ponteiro para o primeiro elemento da lista (as vezes chamado de cabe�a)
	int tamanho;
};

#endif
