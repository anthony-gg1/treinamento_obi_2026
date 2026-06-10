#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, k;
	
	cin >> n >> k;
	
	vector<int> A(n);
	
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}
	
	sort(A.begin(), A.end(), greater<int>());
	
	cout << A[k - 1];
	return 0;
}
