#include <iostream>
using namespace std;

bool isPrime(int num) {
	for (int i=2; i<=num/2; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	int num = 2;
	while(num >= 0) {
		if(isPrime(num)) cout << num << endl;
		num++;
	}
}
