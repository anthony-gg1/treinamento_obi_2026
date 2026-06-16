#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int p, o;
	cin >> p >> o;
	cout << min(p / 2, o / 4);
	return 0;
}
