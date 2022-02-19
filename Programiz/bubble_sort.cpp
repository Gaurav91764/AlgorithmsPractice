#include<iostream>
using namespace std;

void bubble_sort(int *arr, int n);

int main()
{
    int arr[] = {12, 90, 3, 9, 65, 4, 17, 39, 19};
    int n = 9;
    cout << "Array elements before sorting: ";
    for(int i = 0;i < n;++i)
        cout << arr[i] << " ";
    
    bubble_sort(arr, n);
}

void bubble_sort(int *arr, int n)
{
    for(int i = 0;i < n - 1;++i)
    {
        int key = arr[i];
        for(int i = 0;i < n - i - 1;++i)
        {
            if(arr[i] < key)
                swap(arr[i], key);
        }
    }
}