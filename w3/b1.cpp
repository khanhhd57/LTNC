#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    bool kt = true;
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) cin>>b[i];
    for (int i = 0; i < n; i++)
        if(a[i] != b[i]){
            kt = false;
        	break;}
    if(kt == true) cout <<"YES";
    else
        cout<<"NO";
}
