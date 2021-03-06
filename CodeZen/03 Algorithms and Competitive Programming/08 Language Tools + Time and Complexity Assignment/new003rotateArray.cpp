#include <iostream>
using namespace std;

// #include "solution.h"

#include <bits/stdc++.h>

// Reversing Total Array
// Then Reversing the first (n - d) elements and the following d elements separately.
// O()
void rotate3(int *input, int d, int n)
{
 
}

// Rotating the array all at once
// O(n) Time | O(1) space
void rotate2(int *input, int d, int n)
{
 
}

//  Rotating the array one by one
// O(dn) Time | O(1) space
void rotate(int *input, int d, int n)
{
    list<int> my_list;
    for (int i = 0; i < n; i++)
        my_list.push_back(input[i]);

    for (int i = 0; i < d; i++)
    {
        auto temp = my_list.front();
        my_list.pop_front();
        my_list.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        auto temp2 = my_list.front();
        input[i] = temp2;
        my_list.pop_front();
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;

        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        int d;
        cin >> d;

        rotate(input, d, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}