#include <iostream>

using namespace std;

int main()
{
    int n, k=1;
    cin >> n;
    for (int i = 1; i <= 2*n + 1; i++){
        for (int j = 0; j <= (2*n - k - 1)/2; j++)
            cout << ". ";
        for (int j = 0; j < k; j++)
            cout << "* ";
        for (int j = 0; j <= (2*n - k - 1)/2; j++)
            cout << ". ";
        if (i <= n)
            k += 2;
        else
            k -= 2;
        cout << endl;
    }
    return 0;
}
