#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long suma[41];
    suma[0] = 1;
    for (int i = 1; i <= 40; i++)
    {
        suma[i] = 2 * suma[i - 1];
    }
    for (int tc = 0; tc < t; tc++)
    {
        int M, N;
        cin >> M >> N;

        long long sumaAcumulada = 0;

        for (int i = M; i <= N; i++)
        {
            sumaAcumulada += suma[i];
            
        }
        cout<<sumaAcumulada<<endl;
    }
    return 0;
}