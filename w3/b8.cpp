#include <iostream>
#include <cstring>


using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size();) {
        if (i > s.size() - 4 || s.substr(i, 4) != "Zues") {
            cout << s[i];
            i++;
        } else {
            cout << "Zeus";
            i += 4;
        }
    }
}
