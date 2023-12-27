#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        if (arr[i] % k == 0)
        {
            cout <<arr[i]<<" ";
        }else{
            cout<<"X"<<" ";
        }
    }

    return 0;
}