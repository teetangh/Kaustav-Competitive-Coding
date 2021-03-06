#include <iostream>
using namespace std;
// #include "solution.h"

void printPatt(int n)
{
    //write your code here
    n = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= (i - 1); j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= (i - 1); j++)
            cout << "*";
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    printPatt(n);
    return 0;
}
// Sample Input 1:
// 5
// Sample Output 1:
//   *
//  ***
// *****
//  ***
//   *
// Sample Input 2:
// 3
// Sample Output 2:
//   *
//  ***
//   *