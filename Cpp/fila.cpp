#include<iostream>
#include<vector>
using namespace std;

int main() {
	int p, i, contM = 1, altura;
	std::vector<int> pessoas;
	int ultimo;
	cin >> p;
	for (i = 1; i <= p; i++) {
		cin >> altura;
		pessoas.push_back(altura);
		ultimo = pessoas.back();
		for(altura : pessoas) {
			if(altura - 1 <= ultimo) {
				contM++;
			}
			else {
				int maior;
				ultimo = maior;
			}
		}
	}
	cout << p - contM;
}

//EM PRODUÇÃO