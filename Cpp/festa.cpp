#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int e, s, l;
	cin >> e >> s >> l;
	cout << std::abs(e - s) + std::abs(s - l) + std::abs(l - e);
}
