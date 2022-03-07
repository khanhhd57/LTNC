#include <iostream>
#include <cstring>

using namespace std;

bool check(string s){
	if (s.size()<6 || s.size()>15) return false;
	if(s[0]>='0' && s[0] <='9') return false;
	for(int i=0;i<s.size();i++){
        if ((s[i]<'a' || s[i]>'z') && (s[i]<'A' || s[i]>'Z') && (s[i]<'0' || s[i]>'9'))
            return false;
	}
    return true;
}

int main(){
    string s;
    cin>>s;
    if (check(s) == false ) cout<<"Invalid username.";
    else cout<<"Valid username.";

}
