#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m;
    // cin >> n;

    int **p = new int *[m];

    // MxN ARRRAY
    // for (int i = 0; i < m; i++)
    // {
    //     p[i] = new int[n];
    //     for (int j = 0; j < n; j++)
    //         cin >> p[i][j];
    // }

    // RAGGED ARRRAY
    for (int i = 0; i < m; i++)
    {
        p[i] = new int[i + 1];
        for (int j = 0; j < i + 1; j++)
            cin >> p[i][j];
    }

    cout << " OUTPUT IS " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << p[i][j] << " ";
        cout << endl;
    }

    // Deleting each array
    for (int i = 0; i < m; i++)
        delete[] p[i];

    // Deleting the array of the arrays
    delete[] p;
}
// // Sample IO
// 4
// 1 2 3 4 5 6 7 8 9 10
//  OUTPUT IS 
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 