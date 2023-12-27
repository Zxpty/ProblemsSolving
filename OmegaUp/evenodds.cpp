#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int arr[n];
    int par[n], impar[n];
    int p = 0, im = 0;

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (i % 2 == 0)
            {
                par[p] = i;
                p++;
            }
            else
            {
                impar[im] = i;
                im++;
            }
        }
    }
    for (int i = 0; i < im; i++)
    {
        cout << impar[i] << " ";
    }
// don't solved this problem
    return 0;
}