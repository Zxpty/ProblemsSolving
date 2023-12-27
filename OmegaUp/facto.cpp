#include <bits/stdc++.h>

using namespace std;
int fact(int arg)
{
    int fac = 1;
    if (arg == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i < arg; i++)
        {
            fac = fac * i;
        }

        return fac;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    int x;
    cin >> x;
    fact(x);
    cout << fact(x) << endl;
    return 0;
}