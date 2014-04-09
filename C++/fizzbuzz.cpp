#include <iostream>

// g++ (Ubuntu/Linaro 4.8.1-10ubuntu9) 4.8.1

using namespace std;

int main()
{
	for (int n = 1; n <= 100; ++n) {
		if (n%15 == 0) {
			cout << "FizzBuzz";
		} else if (n%3 == 0) {
			cout << "Fizz";
		} else if (n%5 == 0) {
			cout << "Buzz";
		} else {
			cout << n;
		}
		cout << "\n";
	}
}