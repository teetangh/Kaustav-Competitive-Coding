#include <iostream>
// #include "solution.h"
using namespace std;

// arr - input array
// n - size of array

int FindSortedArrayRotation(int arr[], int n)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i + 1])
            count++;
        else if (arr[i] > arr[i + 1])
        {
            break;
        }
    }

    if (count != n)
        return count;
    else
        return 0;
}

int main()
{

    int size;
    cin >> size;
    int *input = new int[1 + size];

    for (int i = 0; i < size; i++)
        cin >> input[i];

    cout << FindSortedArrayRotation(input, size);

    return 0;
}
// Sample Input 1:
// 1
// 6
// 5 6 1 2 3 4
// Sample Output 1:
// 2
// Sample Input 2:
// 2
// 5
// 3 6 8 9 10
// 4
// 10 20 30 1
// Sample Output 2:
// 0
// 3