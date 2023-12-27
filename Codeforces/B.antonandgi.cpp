#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int l, b;
    cin >> l >> b;
    int c = 0;

    while (l <= b)
    {
        l *= 3;
        b *= 2;
        c++;
    }
    cout << c;

    return 0;
}