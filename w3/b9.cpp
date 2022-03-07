#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int count = 0;
	while (s[count] == ' '){
		cout<<' ';
		count++;
	}
    for (int i = count; i < s.length(); i++) {
        if (s[i] != ' ') {
            cout<<s[i];
        }
        else {
			cout<<s[i];
			int temp = i + 1;
        	while ( i < s.length() && s[temp] == ' '){
        		i++;
        		temp++;
			}
		}
    }
}
