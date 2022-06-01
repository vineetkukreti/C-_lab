#include <iostream>
using namespace std;

int main()
{
    int n, i, t = 9;
    long sum = 0;
    cout << "-------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++) 
    {
        sum += t;
        cout << t << "  ";
        t = t * 10 + 9;
    }
    cout << "\n The sum of the series = " << sum << endl;
}
