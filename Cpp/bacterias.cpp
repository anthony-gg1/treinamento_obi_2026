#include<iostream>
using namespace std;

int main() {
	int n, p;
	int dias = 0, bac = 1;
	
	cin >> n >> p;
	
	while(bac * p <= n) {
		bac *= p;
		dias++;
	}
	cout << dias;
	return 0;
}
