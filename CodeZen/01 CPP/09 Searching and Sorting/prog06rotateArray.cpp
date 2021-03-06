#include <iostream>
// #include "solution.h"
using namespace std;

// arr - input array
// size - size of array
// d - array to be rotated by d elements

void Rotate(int arr[], int d, int size)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing the output is handled automatically.
     */
    int temp;
    int i, j;
    for (i = 0; i < d; i++)
    {
        temp = arr[0];
        for (j = 1; j < size; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[j - 1] = temp;
    }
}

int main()
{

    int size;
    int d;
    cin >> size;
    int *input = new int[1 + size];

    for (int i = 0; i < size; i++)
        cin >> input[i];
    cin >> d;

    Rotate(input, d, size);
    for (int i = 0; i < size; i++)
        cout << input[i] << " ";
    return 0;
}
// Sample Input 1:
// 1
// 7
// 1 2 3 4 5 6 7
// 2
// Sample Output 1:
// 3 4 5 6 7 1 2
// Sample Input 2:
// 2
// 7
// 1 2 3 4 5 6 7
// 0
// 4
// 1 2 3 4
// 2
// Sample Output 2:
// 1 2 3 4 5 6 7
// 3 4 1 2