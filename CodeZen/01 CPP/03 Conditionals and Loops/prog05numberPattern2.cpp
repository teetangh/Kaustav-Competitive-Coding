#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << (i + j - 1);
        }
        cout << endl;
    }
}
// Sample Input :
// 5
// Sample Output :
//     1
//    23
//   345
//  4567
// 56789