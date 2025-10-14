#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);

	int m = n;
	/* TODO: add code below this line to check if n is a happy number */











	if(n == 1) 
        printf("%d is a happy number.\n", m);
	else 
        printf("%d is NOT a happy number.\n", m);
	return 0;
}