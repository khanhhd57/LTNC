#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	int countAlpha = 0, countNumber = 0, countOther = 0;
	for ( int i = 0; i < s.length(); i++){
		if (isalpha(s[i])) {
            countAlpha++;
        } else if (isdigit(s[i])) {
            countNumber++;
        } else {
            countOther++;
        }
	}
	cout<<countAlpha<<" "<<countNumber<<" "<<countOther;
}
