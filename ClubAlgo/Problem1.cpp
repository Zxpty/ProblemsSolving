#include <iostream>
#include <vector>
using namespace std;
int findIndex(vector<int> &P, int X)
{
    for (int i = 0; i < P.size(); i++)
    {
        if (P[i] == X)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int N, X;
    cin >> N >> X;
    vector<int> P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    int k = findIndex(P, X);
    cout << k + 1<< endl;
    return 0;
}