// Finding the Maximum and Minimum Element in th eArray

#include <iostream>
using namespace std;

int getMin(int arr[], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size)
{
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cin >> size;
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum element is " << getMax(num, size) << endl;
    cout << "Minimum element is " << getMin(num, size) << endl;

    return 0;
}