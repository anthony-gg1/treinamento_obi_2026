#include<stdio.h>

int min(int a, int b) {
	return (a < b) ? a : b;
}

int main() {
	int p, o;
	scanf("%d", &p);
	scanf("%d", &o);
	printf("%d", min(p / 2, o / 4));
	return 0;
}
