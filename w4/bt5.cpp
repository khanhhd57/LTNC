bool isPrime (int number){
	bool checkPrime = true;
	if ( number < 2 ) checkPrime = false;
	int i = 2;
	while ( i < number ){
		if ( number % i == 0 ){
			checkPrime = 0;
			break;
		}
		i++;
	}
	return checkPrime;
}

