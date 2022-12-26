int sumDigitOfStringNumber(char n[]){
	int sum = 0;
	int i = 0;
	for (i = 0; i< strlen(n); i++){
		int digit = (int) n[i] - 48;
		sum = sum + digit;
	}
	return sum;
}