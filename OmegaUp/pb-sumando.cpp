#include <iostream>

using namespace std;
int fila, columna;

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int matriz[n][n];
    for (fila = 0; fila < n; fila++)
    {
        for (columna = 0; columna < n; columna++)
        {
            cin >> matriz[fila][columna];
        }
    }

    for (columna = 0; columna < n; columna++)
    {
        int suma = 0;
        for (fila = 0; fila < n; fila++)
        {
            suma = suma + matriz[fila][columna];
        }
        cout << suma << " ";
    }

    return 0;
}