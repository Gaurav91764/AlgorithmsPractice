#include<iostream>
#include<cmath>

using namespace std;

void print_array(int*, int);
int jump_search(int *arr, int x, int n);

int main()
{
    int arr[] = {2,50,80,81,90,93,105,115};
    int n =  sizeof(arr)/sizeof(arr[0]);

    print_array(arr,n);
    int index = jump_search(arr,20, n);
    
    if(index > -1)
        cout << "element found at " << index << "\n";
    else
        cout << "Element not found." << "\n"; 
}

int jump_search(int *arr,int x, int n)
{
    int step = sqrt(n);
    int prev = 0;

    int i = 0;
    while (i < n)
    {
        if (x == arr[i])
        {
            return i;
        }
        else if(x < arr[i])
            break;
        else
            i += step;
    }

    prev = i - step;
    
    for(int j = prev+1; j < i; j++)
    {
        if(arr[j] == x)
            return j;
    }
    
    return -1;
}

void print_array(int *arr, int n)
{
    for(int i = 0;i < n;++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}