
#include <stdio.h>

int main(void) {
	int numA;
	int numB;

	printf("Please enter your first positive integer: ");
	scanf_s("%d", &numA);

	printf("Please enter your second positive integer: ");
	scanf_s("%d", &numB);

	while (numA != numB) {

		if (numB > numA) {
			numB -= numA;
		}
		else {
			numA -= numB;
		}
	}

	printf("GCD is: %d\n", numA);

	return 0;
}
