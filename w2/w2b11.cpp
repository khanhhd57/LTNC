#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n;
	double a[n];
	cin>>n;
	double sum = 0;
	for ( int i = 0; i < n; i++){
		cin>>a[i];
	}
	for ( int i = 0; i < n; i++){
		sum += a[i];
	}
	double mean = sum / n;
	double var = 0;
	for ( int i = 0; i < n; i++){
		var += (a[i]-mean)*(a[i]-mean);
	}
	cout << fixed << setprecision(2) << var / n;
	return 0;
	
}
