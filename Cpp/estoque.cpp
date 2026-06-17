#include<iostream>
using namespace std;

int main() {
	int m, n, estoque[501][501], compras[501][501];
	int n2, contV = 0;
	
	cin >> m >> n;
	
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> estoque[i][j];
		}
	}
	
	cin >> n2;
	for(int i = 1; i <= n2; i++) {
		cin >> compras[i][0];
		cin >> compras[i][1];
	}
	for(int i = 1; i <= n2; i++) {
		int linha = compras[i][0];
		int coluna = compras[i][1];
		
		if(estoque[linha][coluna] > 0) {
			estoque[linha][coluna]--;
			contV++;
		}
	}
	
	cout << contV;
	return 0;
}
