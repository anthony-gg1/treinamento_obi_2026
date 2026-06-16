#include<stdio.h>

int main() {
	int m1, m2, c, cf;
	scanf("%d", &m1);
	scanf("%d", &m2);
	scanf("%d", &c);
	scanf("%d", &cf);
	
	if(c - cf >= m1 && c - cf <= m2) {
		printf("S");
	}
	else {
		printf("N");
	}
	return 0;
}
