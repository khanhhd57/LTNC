#include <iostream>

using namespace std;

int main()
{
    long long n;
    int temp=0;
    cin >> n;
    do {
        n /= 10;
        temp++;
    }while (n != 0);
    cout << temp;
    return 0;
}
