#include<iostream>
using namespace std;

int main() {
	int n, q, matriz[55][55], novamatriz[55][55];
	cin >> n >> q;
	
	//Tranforma as linhas de caracteres em inteiros
	for(int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		for(int j = 1; j <= n; j++) {
			if(s[j-1] == '1') matriz[i][j] = 1;
			else matriz[i][j] = 0;
		}
	}
	
	//Operacao com as celulas vivas/mortas
	for(int op = 1; op <= q; op++) {
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				int vizinhosvivos = 0;
				vizinhosvivos += matriz[i-1][j-1];
				vizinhosvivos += matriz[i-1][j];
				vizinhosvivos += matriz[i-1][j+1];
				vizinhosvivos += matriz[i][j-1];
				vizinhosvivos += matriz[i][j+1];
				vizinhosvivos += matriz[i+1][j-1];
				vizinhosvivos += matriz[i+1][j];
				vizinhosvivos += matriz[i+1][j+1];
				
				if(matriz[i][j] == 0) {
					if(vizinhosvivos == 3) {
						novamatriz[i][j] = 1;
					}
					else {
						novamatriz[i][j] = 0;
					}
				}
				else {
					if(vizinhosvivos == 2 || vizinhosvivos == 3) {
						novamatriz[i][j] = 1;
					}
					else {
						novamatriz[i][j] = 0;
					}
				}
			}
		}
		//Atribui os valores a cada passo da operacao
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				matriz[i][j] = novamatriz[i][j];
			}
		}
	}
	//Imprime a matriz final apos o ultimo passo
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cout << matriz[i][j];
		}
		cout << endl;
	}
	return 0;
}
