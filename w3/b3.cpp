#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for ( int i = 0; i < n; i++) cin>>a[i];
	for ( int i = 0; i < n; i++){
		for ( int j = i+1; j < n; j++){
			if ( a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	int p = 0;
	while ( p < n - 1) {
		while (a[p] == a[p + 1] && p < n - 1) {
			for (int j = p ; j < n - 1; j++) a[j] = a[j + 1];
			n--;
		}
		p++;
	}
	for ( int i = 0; i < n; i++) cout<<a[i]<<" ";
}
