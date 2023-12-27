#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    string p;
    string rp;
    for (int i = 0; i < n; i++)
    {

        cin >> p;
        for (int j = p.size() - 1; j >= 0; j--)
        {
            rp += tolower(p[j]);
        }

        if (p == rp)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}