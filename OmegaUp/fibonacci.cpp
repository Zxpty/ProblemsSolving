#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    // generar serie fib
    int a = 0;
    int b = 1;
    int c = 1;
    for (int i = 1; i < n; i++)
    {
        if (i < c)
        {
            cout << i << " ";
        }
        else if (i == c)
        {
            a = b;
            b = c;
            c = a + b;
        }
    }
    return 0;
}