#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	size_t x = 0;
	cin >> x;

	size_t i = 1;
	double current = 1;
	long double sum = 0, oldSum = -1;

	while (sum - oldSum > 0.001)
	{
		oldSum = sum;
		sum += current;
		current = current * x / i;
		i++;
	}

	cout << fixed << setprecision(4) << sum ;
	
	return 0;
}
