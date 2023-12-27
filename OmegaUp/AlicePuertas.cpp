#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int x)
{
    int min = 0;
    int max = arr.size() - 1;
    while (min <= max)
    {
        int pos = min + (max - min) / 2;
        if (arr[pos] == x)
        {
            return pos;
        }
        else if (arr[pos] < x)
        {
            min = pos + 1;
        }
        else
        {
            max = pos - 1;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int m;
    cin >> n;
    vector<int> puertas(n);

    for (int i = 0; i < n; i++)
    {
        cin >> puertas[i];
    }
    cin >> m;
    vector<int> numbersfind(m);
    for (int i = 0; i < m; i++)
    {
        cin >> numbersfind[i];
    }
    for (int i = 0; i < m; i++)
    {
        int result = binarySearch(puertas, numbersfind[i]);
        if (result == -1)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << result + 1 << " ";
        }
    }

    return 0;
}