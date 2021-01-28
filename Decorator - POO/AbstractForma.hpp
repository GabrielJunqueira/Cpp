#ifndef ABSTRACT_FORMA_H
#define ABSTRACT_FORMA_H

#include <string>

/**
 * \Uma classe abstrata que denota uma forma. Em nosso caso, uma forma � apenas
 * uma string, ou seja, uma sequ�ncia de caracteres.
 */
class AbstractForma {
public:
  /**
   * Este � o m�todo abstrato que "desenha" o objeto. N�o estaremos mostrando
   * uma figura de fato (como seria o efeito em um aplica��o pr�tica).
   * No exemplo em o "desenho" �a string que esta classe codifica.
   * Observe que esse m�todo n�o tem corpo, ou seja, � atribu�do a zero. retorna
   * o "desenho" que esta forma representa.
   */
  virtual std::string desenha() = 0;

  /**
   * O destruidor virtual. Cada classe abstrata, por exemplo, uma classe com um
   * m�todo virtual atribu�do a zero, precisa de um destruidor virtual. Por que
   * a classe abstrata precisa de um destruidor virtual? Qualquer usu�rio de sua
   * classe provavelmente ter� um ponteiro para a classe abstrata, n�o um
   * ponteiro para a implementa��o concreta. Portanto, quando eles tentarem
   * exclu�-lo, se o destruidor n�o for virtual, eles chamar�o o destruidor da
   * classe abstrata (ou o padr�o fornecido pelo compilador, se voc� n�o
   * especificou um), n�o o destruidor da classe derivada. Se houver mem�ria a
   * ser liberada na classe concreta, o destruidor da classe abstrata n�o ser�
   * capaz de faz�-lo. Isso levar� a um vazamento de mem�ria.
   */
  virtual ~AbstractForma() {};
};

#endif
