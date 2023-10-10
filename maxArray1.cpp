#include <iostream>
#include <climits>
using namespace std;

int MaxValue(int arr[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int MinValue(int arr[], int n)
{
    // int max=INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {1, 2, 3, -4, 5};
    int max = MaxValue(arr, (sizeof(arr)) / sizeof(int));
    int min = MinValue(arr, (sizeof(arr)) / sizeof(int));

    cout << max << " " << min;
    return 0;
}