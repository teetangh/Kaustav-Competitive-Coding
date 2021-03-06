#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int knapsack_bottom_up(vector<int> weight_array, vector<int> value_array, int bag_capacity, int num_of_items)
{
    int default_value = 0;
    vector<vector<int>> tabulation_matrix;
    tabulation_matrix.resize(num_of_items + 1, vector<int>(bag_capacity + 1, default_value));

    for (int i = 1; i < num_of_items + 1; i++)
    {
        for (int j = 1; j < bag_capacity + 1; j++)
        {
            if ((weight_array[i - 1] <= bag_capacity) && (j - weight_array[i - 1] >= 0))
                tabulation_matrix[i][j] = max(
                    (value_array[i - 1] + tabulation_matrix[i - 1][j - weight_array[i - 1]]),
                    (tabulation_matrix[i - 1][j]));
            else
                tabulation_matrix[i][j] = tabulation_matrix[i - 1][j];
        }
    }
    int answer = tabulation_matrix[num_of_items][bag_capacity];
    return answer;
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

    vector<int> weight_array(num_of_items), value_array(num_of_items);
    int curr_item_weight, curr_item_value;
    for (int i = 0; i < num_of_iterations; i++)
    {
        cin >> curr_item_weight >> curr_item_value;
        weight_array[i] = curr_item_weight;
        value_array[i] = curr_item_value;
    }

    int answer = knapsack_bottom_up(weight_array, value_array, bag_capacity, num_of_items);
    cout << answer;

    return 0;
}
// // Sample IO
// 3 5

// 1 6
// 2 10
// 3 12

// Current Tabulation Matrix Status
//   0  0  0  0  0  0
//   0  6  6  6  6  6
//   0  6 10 16 16 16
//   0  6 10 16 18 22

// 22