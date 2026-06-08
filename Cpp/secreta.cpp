#include<iostream>
using namespace std;

int main() {
	int n, atual, marcado;
	int contV = 1;
	cin >> n >> marcado;
	
	for(int i = 1; i <= n - 1; i++) {
		cin >> atual;
		if(atual != marcado) {
			contV++;
			marcado = atual;
		}
	}
	cout << contV;
	return 0;
}
