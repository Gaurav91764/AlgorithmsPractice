#include<iostream>

using namespace std;

void printArr(int arr[], int n);
void selection_sort(int arr[], int n);

int main()
{
    int arr[] = {89,334,23,9,78,90,1,0};
    printArr(arr, 8);
    selection_sort(arr, 8);
    printArr(arr, 8);
}


//selection sort
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int iofmin = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[iofmin])
            {
                iofmin = j;
            } 
        }
        
        //swap ith element with minimum element of the array
        int temp = arr[i];
        arr[i] = arr[iofmin];
        arr[iofmin] = temp;
    }
    
}


void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}