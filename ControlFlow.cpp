#include <iostream>
#include "sumOdd.cpp"
using namespace std;

void branch1() {
	// firstNum is even, secondNum is even
	long long result = sumOdd(2, 4);
	cout << "sumOdd(2, 4) = " << result << "\n";
	if (result == 0) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void branch2() {
	// firstNum is even, secondNum is odd
	long long result = sumOdd(6, 3);
	cout << "sumOdd(6,3) = " << result << "\n";
	if (result == 3) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void branch3() {
	// firstNum is odd, secondNum is even
	long long result = sumOdd(7, -2);
	cout << "sumOdd(7, -2) = " << result << "\n";
	if (result == 7) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void branch4() {
	// firstNum is odd, secondNum is odd
	long long result = sumOdd(-1, 9);
	cout << "sumOdd(-1, 0) = " << result << "\n";
	if (result == 8) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

int main() {
	branch1();
	branch2();
	branch3();
	branch4();
	return 0;
}
