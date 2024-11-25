#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int a = rand();
	int input;

	while (1) {
		printf("Please input a number: ")
		scanf("%d", &input);
		printf("Number: %d", input);
		if (a < input) {
			printf("Input Value is bigger than the number");
		}
		else if (a == input) {
			printf("Same.");
			break;
		} else {
			printf("Input Value is smaller than the number");
		}
	}
	return 0;
}
