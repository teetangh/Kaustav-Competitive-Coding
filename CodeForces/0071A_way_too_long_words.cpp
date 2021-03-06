// Includes
#include <iostream>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// Defines
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 1; i <= n; i++)
#define INF 1000000000
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

// Typedefs
typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef unsigned long long int ulli;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("xinput.txt", "r", stdin);   // for getting input from xinput.txt
    freopen("xoutput.txt", "w", stdout); // for writing output to xoutput.txt
#endif

    fastio;

    int tc;
    cin >> tc;
    // cout << tc;

    string temp;

    while (tc--)
    {
        cin >> temp;
        if (temp.length() > 10)
        {
            cout << temp[0] << temp.length() - 2 << temp[temp.length() - 1] << endl;
        }
        else
            cout << temp << endl;
    }
}