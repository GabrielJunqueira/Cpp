#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main() {

	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantNormais = 0;
	int quantRelampagos = 0;

	EncomendaNormal enc0(5, 12);
	enc0.setRemetente(cli0);
	enc0.setDestinatario(cli1);
	quantNormais++;

	EncomendaNormal enc1(10, 12);
	enc1.setRemetente(cli1);
	enc1.setDestinatario(cli2);
	quantNormais++;

	EncomendaNormal enc2(7, 12);
	enc2.setRemetente(cli2);
	enc2.setDestinatario(cli3);
	quantNormais++;

	EncomendaNormal enc3(2, 12);
	enc3.setRemetente(cli3);
	enc3.setDestinatario(cli4);
	quantNormais++;

	EncomendaNormal enc4(3, 12);
	enc4.setRemetente(cli4);
	enc4.setDestinatario(cli5);
	quantNormais++;

	EncomendaRelampago enc5(13, 18);
	enc5.setRemetente(cli5);
	enc5.setDestinatario(cli6);
	quantRelampagos++;

	EncomendaRelampago enc6(6, 18);
	enc6.setRemetente(cli6);
	enc6.setDestinatario(cli7);
	quantRelampagos++;

	EncomendaRelampago enc7(8, 18);
	enc7.setRemetente(cli7);
	enc7.setDestinatario(cli0);
	quantRelampagos++;

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoNormais = 0;
	double custoRelampago = 0;

	enc0.calculaEntrega();
	enc0.print();
	custoNormais += enc0.calculaEntrega();
	std::cout << endl;

	enc1.calculaEntrega();
	enc1.print();
	custoNormais += enc1.calculaEntrega();
	std::cout << endl;

	enc2.calculaEntrega();
	enc2.print();
	custoNormais += enc2.calculaEntrega();
	std::cout << endl;

	enc3.calculaEntrega();
	enc3.print();
	custoNormais += enc3.calculaEntrega();
	std::cout << endl;

	enc4.calculaEntrega();
	enc4.print();
	custoNormais += enc4.calculaEntrega();
	std::cout << endl;

	enc5.calculaEntrega();
	enc5.print();
	custoRelampago += enc5.calculaEntrega();
	std::cout << endl;

	enc6.calculaEntrega();
	enc6.print();
	custoRelampago += enc6.calculaEntrega();
	std::cout << endl;

	enc7.calculaEntrega();
	enc7.print();
	custoRelampago += enc7.calculaEntrega();
	std::cout << endl;

	std::cout << "\n>> Encomendas Normais <<"
			  << "\nQuantidade: "  << quantNormais
			  << "\nValor Total: " << custoNormais << endl
			  << "\n>> Encomendas Relâmpago <<"
			  << "\nQuantidade: "  << quantRelampagos
			  << "\nValor Total: " << custoRelampago << endl;
}
