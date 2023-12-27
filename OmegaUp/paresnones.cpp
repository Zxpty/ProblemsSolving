#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int arr[n];
    int par = 0;
    int impar = 0;
    int cp = 0, ci = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {

            par = par + arr[i];
            cp++;
        }
        else
        {

            impar = impar + arr[i];
            ci++;
        }
    }
    int ppar = par / cp;
    int pimp = impar / ci;
    if (ppar == pimp)
    {
        cout << "EMPATE!";
    }

    else if (ppar > pimp)
    {
        cout << "APARICIO";
    }
    else
    {
        cout << "NONILA";
    }
    return 0;
}