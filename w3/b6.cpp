#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	int dem = 0;
	for ( int i = 0; i < s.length(); i++){
		if ( s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
		dem ++;
	}
	cout<<dem;
}
