// D
// C D
// B C D
// A B C D

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}