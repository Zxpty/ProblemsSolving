#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> a = {1, 4, 6, -100, 100, 4, 2};
    int n = a.size();
    int mx = 0;

    for (int st = 0; st < n; st++)
    {
        for (int ed = st; ed < n; ed++)
        {
            int sum = 0;
            for (int i = st; i <= ed; i++)
                sum += a[i];
                mx = max(mx, sum);
        }
    }
    cout << mx;
    return 0;
}