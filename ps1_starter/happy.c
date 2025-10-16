#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);

	int m = n;
	/* TODO: add code below this line to check if n is a happy number */

	//key #: 1 (isHappy) 4(isNotHappy)
	while (n != 1 && n != 4) {
		int total = 0; //combines the digits^2
		int temp = n; //temporary variable for n

		//loops till temp > 0 is false
		while (temp > 0) {
			int digit = temp % 10; //indivualize's each digit if more than one 
			total += digit * digit; //adds digit^2
			temp /= 10; //from 13 to 1
		}
		n = total;
		printf("%d\n", n);
	}

	if(n == 1) 
        printf("%d is a happy number.\n", m);
	else 
        printf("%d is NOT a happy number.\n", m);
	return 0;
}