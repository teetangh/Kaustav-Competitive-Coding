#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int longest_common_subsequence(string X, string Y)
{
    int default_value = 0;
    vector<vector<int>> tabulation_matrix;
    tabulation_matrix.resize(X.length() + 1, vector<int>(Y.length() + 1, default_value));

    for (int i = 1; i < X.length() + 1; i++)
    {
        for (int j = 1; j < Y.length() + 1; j++)
        {
            if (X[i - 1] == Y[j - 1])
                tabulation_matrix[i][j] = 1 + tabulation_matrix[i - 1][j - 1];
            else
                tabulation_matrix[i][j] = 0;
        }
    }

    return tabulation_matrix[X.length()][Y.length()];
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("xinput.txt", "r", stdin);
    freopen("xoutput.txt", "w", stdout);
#endif
    string X, Y;
    cin >> X >> Y;
    int answer = longest_common_subsequence(X, Y);
    cout << answer;
    return 0;
}

// // Sample IO
// batman

// aman

// 3