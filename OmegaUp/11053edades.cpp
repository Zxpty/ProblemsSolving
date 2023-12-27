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
        else if (arr[pos] < max)
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
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    

    for (int i = 0; i < n; i++)
    {
        int result = binarySearch(arr, arr[i]);
        if(result ==-1){
            cout<<"";
        }else{
            cout<<result+1<<" ";
        }
    }

    return 0;
}

// problem don't finish