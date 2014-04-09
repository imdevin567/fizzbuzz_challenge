#include <stdio.h>

// gcc (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1

int main() 
{
	int n;
	for (n = 1; n <= 100; ++n) {
		if (n%15 == 0) {
			printf("%s\n", "FizzBuzz");
		} else if (n%3 == 0) {
			printf("%s\n", "Fizz");
		} else if (n%5 == 0) {
			printf("%s\n", "Buzz");
		} else {
			printf("%d\n", n);
		}
	}
}