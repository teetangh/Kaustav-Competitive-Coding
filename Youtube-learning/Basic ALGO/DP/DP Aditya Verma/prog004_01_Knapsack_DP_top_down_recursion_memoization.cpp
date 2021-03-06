#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int knapsack_top_down(vector<int> weight_array, vector<int> value_array, int bag_capacity, int num_of_items, vector<vector<int>> memoization_matrix)
{
    if (num_of_items == 0 || bag_capacity == 0)
        return memoization_matrix[num_of_items][bag_capacity] = 0;

    if (memoization_matrix[num_of_items][bag_capacity] != -1)
        return memoization_matrix[num_of_items][bag_capacity];

    if (weight_array[num_of_items - 1] <= bag_capacity)
        return memoization_matrix[num_of_items][bag_capacity] =
                   max(value_array[num_of_items - 1] + knapsack_top_down(weight_array, value_array, bag_capacity - weight_array[num_of_items - 1], num_of_items - 1, memoization_matrix),
                       knapsack_top_down(weight_array, value_array, bag_capacity, num_of_items - 1, memoization_matrix));

    else if (weight_array[num_of_items - 1] > bag_capacity)
        return memoization_matrix[num_of_items][bag_capacity] = knapsack_top_down(weight_array, value_array, bag_capacity, num_of_items - 1, memoization_matrix);
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("xinput.txt", "r", stdin);
    freopen("xoutput.txt", "w", stdout);
#endif

    int num_of_items, bag_capacity;
    cin >> num_of_items >> bag_capacity;
    int num_of_iterations = num_of_items;

    vector<int> weight_array, value_array;
    int curr_item_weight, curr_item_value;

    while (num_of_iterations--)
    {
        cin >> curr_item_weight >> curr_item_value;
        weight_array.push_back(curr_item_weight);
        value_array.push_back(curr_item_value);
    }
    ////////////////////////////////2D VECTOR CONSTRUCTOR /////////////////////////////
    // specify default value to fill the vector elements
    int default_value = -1;

    // instantiate vector object of type std::vector<int>
    std::vector<std::vector<int>> memoization_matrix;

    // resize the vector to M elements of type std::vector<int>,
    // each having size N and given default value
    memoization_matrix.resize(num_of_items + 1, std::vector<int>(bag_capacity + 1, default_value));

    // Initialising the vector's 1st row and 1st column to 0 for the Knapsack Problem
    for (int i = 0; i < num_of_items + 1; i++)
    {
        for (int j = 0; j < bag_capacity + 1; j++)
        {
            if (i == 0 || j == 0)
                memoization_matrix[i][j] = 0;
        }
    }

    /////////////////////////////////////////////////////////////////////////////////

    int answer = knapsack_top_down(weight_array, value_array, bag_capacity, num_of_items, memoization_matrix);
    cout << answer;

    return 0;
}
// // Sample IO
// 4 60

// 20 40
// 10 100
// 40 50
// 30 60

// 200