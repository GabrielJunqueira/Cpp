#include <iostream>

class IndiceNegativo {
	int indice;
};

class IndiceMaiorQueArranjo {
	int indice;
	int N;
};

class IndiceNaoInicializado {
	// esse erro ocorre quando o método
	//get é invocado sobre um índice que
	//ainda não recebeu qualquer elemento.
	int indice;
};

bool isIncorrect = false;

template<class T, int N> class BoundedArray {
public:
	void set(int index, T value) {
		if (index < 0) {
			isIncorrect = true;
			throw IndiceNegativo();
		}
		if (index >= N) {
			isIncorrect = true;
			throw IndiceMaiorQueArranjo();
		}
		buf[index] = value;
	}
	T get(int index) {
		if (index < 0)
			throw IndiceNegativo();

		return buf[index];
	}
private:
	T buf[N];
};

template<class T> void testArray() {
	BoundedArray<T, 8> a;
	char action;
	int vet[50];
	for (int i = 0; i < 8; i++) {
		vet[i] = 0;
	}
	while (std::cin >> action) {
		int index;
		std::cin >> index;
		try {
			if (action == 's') {
				T value;
				std::cin >> value;
				a.set(index, value);
				if (index >= 0 && index < 8) {
					vet[index] = 1;
				}
			} else if (action == 'g') {
				if (vet[index] == 1) {
					std::cout << a.get(index) << std::endl;
				} else {
					if (index >= 8) {
						throw IndiceMaiorQueArranjo();
					} else {
						if (index < 0) {
							throw IndiceNegativo();
						} else {
							throw IndiceNaoInicializado();
						}
					}
				}
			}
		}

		catch (IndiceNegativo) {
			std::cerr << "Erro: indice negativo." << std::endl;
			isIncorrect = false;
		} catch (IndiceMaiorQueArranjo) {
			std::cerr << "Erro: indice maior que arranjo." << std::endl;
		} catch (IndiceNaoInicializado) {
			std::cerr << "Erro: indice nao inicializado." << std::endl;
		} catch (...) {
			std::cerr << "Erro desconhecido." << std::endl;
		}
	}
}

int main() {
	char type;
	std::cin >> type;
	switch (type) {
	case 'd':
		testArray<double>();
		break;
	case 'i':
		testArray<int>();
		break;
	case 's':
		testArray<std::string>();
		break;
	}
	return 0;
}
