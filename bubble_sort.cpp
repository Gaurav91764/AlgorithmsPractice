#include<iostream>

using namespace std;

void Bubble_sort(int vec[], int n) {
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(vec[j] > vec[j+1])
                swap(vec[j], vec[j+1]);
        }
        
    }  
}

int main()
{
    int arr[6] = {3,76,4,57,89,1};
    Bubble_sort(arr, 6);

    cout << "The sorted array is " << "\n";

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    
}