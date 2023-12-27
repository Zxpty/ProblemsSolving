#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int arr[7];
    double sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    double prom = sum / 7;
    cout << fixed << setprecision(1) << prom;
    return 0;
}