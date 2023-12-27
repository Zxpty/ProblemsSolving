#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i + 1] > arr[i] )
        {
            arr[i] = arr[i+1];
            
        }
    }

    return 0;
}