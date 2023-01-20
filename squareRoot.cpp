#include <iostream>
#include <string>
using namespace std;

string sqrt (double n) {
	double i;
	for (i=0.001; i*i<n; i=i+0.001);
	string s = to_string(n);
	string root = to_string(i-0.001);
	if (n==0) {
		return "Square root of " + s + " is " + root + ".";
	} else if (n < 0) {
		return "Square root of " + s + " is imaginary.";
	}
	return "Square root of " + s + " is " + root + ".";
}

int main() {
	while (true) {
		double n;
		cout << "Take the square root of: ";
		cin >> n;
		cout << endl << sqrt(n) << endl << endl;
	}
}
