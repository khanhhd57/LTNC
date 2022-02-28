#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int lowerBound, upperBound;
	cin>>lowerBound>>upperBound;
	for (int i = lowerBound; i <= upperBound; i++){
		int sqr = sqrt(i);
		if ( sqr*sqr == i ) cout<<i<<" ";
	}
	return 0;
}

