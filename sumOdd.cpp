long long sumOdd(int firstNum, int secondNum) {
	if (firstNum % 2 == 0) {
		if (secondNum % 2 == 0) {
			return 0;
		} else {
			return secondNum;
		}
	} else {
		if (secondNum % 2 == 0) {
			return firstNum;
		} else {
			return (long long)(firstNum) + (long long)(secondNum);
		}
	}
	return (long long)(firstNum) + (long long)(secondNum);
}
