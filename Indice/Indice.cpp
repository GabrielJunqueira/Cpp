#include <string>
#include <vector>
using namespace std;

void delRepeated(vector<string> palavras) {
	for (int i = 0; i < palavras.size(); ++i) {
		for (int j = i + 1; j < palavras.size();) {
			if (palavras[i] == palavras[j]) {
				palavras.erase(palavras.begin() + j);
			} else
				++j;
		}
	}
}

void indice(vector<string> palavras, vector<string> auxiliar) {
	for (int i = 0; i < palavras.size(); i++) {
		for (int j = 0; j < auxiliar.size(); j++) {
			if (palavras[i] == auxiliar[j])
			 i++;
		}
	}
}
