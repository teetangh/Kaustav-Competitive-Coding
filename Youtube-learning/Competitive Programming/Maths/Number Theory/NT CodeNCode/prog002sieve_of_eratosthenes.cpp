// Includes
#include <iostream>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// Defines
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

const int MAX_SIZE = 100;
int *is_prime = new int[MAX_SIZE + 1]{};

void sieve()
{

    for (int i = 0; i <= MAX_SIZE; i++)
        is_prime[i] = 1;
    is_prime[0] = 0, is_prime[1] = 0;

    for (int i = 2; i <= MAX_SIZE; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= MAX_SIZE; j += i)
                is_prime[j] = 0;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("xinput.txt", "r", stdin);   // for getting input from xinput.txt
    freopen("xoutput.txt", "w", stdout); // for writing output to xoutput.txt
#endif

    fastio;

    sieve();
    for (int i = 0; i <= MAX_SIZE; i++)
        cout << i << " " << (is_prime[i] ? "prime" : "not prime") << endl;
}

// // Sample IO
// 0 not prime
// 1 not prime
// 2 prime
// 3 prime
// 4 not prime
// 5 prime
// 6 not prime
// 7 prime
// 8 not prime
// 9 not prime
// 10 not prime
// 11 prime
// 12 not prime
// 13 prime
// 14 not prime
// 15 not prime
// 16 not prime
// 17 prime
// 18 not prime
// 19 prime
// 20 not prime
// 21 not prime
// 22 not prime
// 23 prime
// 24 not prime
// 25 not prime
// 26 not prime
// 27 not prime
// 28 not prime
// 29 prime
// 30 not prime
// 31 prime
// 32 not prime
// 33 not prime
// 34 not prime
// 35 not prime
// 36 not prime
// 37 prime
// 38 not prime
// 39 not prime
// 40 not prime
// 41 prime
// 42 not prime
// 43 prime
// 44 not prime
// 45 not prime
// 46 not prime
// 47 prime
// 48 not prime
// 49 not prime
// 50 not prime
// 51 not prime
// 52 not prime
// 53 prime
// 54 not prime
// 55 not prime
// 56 not prime
// 57 not prime
// 58 not prime
// 59 prime
// 60 not prime
// 61 prime
// 62 not prime
// 63 not prime
// 64 not prime
// 65 not prime
// 66 not prime
// 67 prime
// 68 not prime
// 69 not prime
// 70 not prime
// 71 prime
// 72 not prime
// 73 prime
// 74 not prime
// 75 not prime
// 76 not prime
// 77 not prime
// 78 not prime
// 79 prime
// 80 not prime
// 81 not prime
// 82 not prime
// 83 prime
// 84 not prime
// 85 not prime
// 86 not prime
// 87 not prime
// 88 not prime
// 89 prime
// 90 not prime
// 91 not prime
// 92 not prime
// 93 not prime
// 94 not prime
// 95 not prime
// 96 not prime
// 97 prime
// 98 not prime
// 99 not prime
// 100 not prime
