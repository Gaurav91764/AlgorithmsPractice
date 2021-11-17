#include<iostream>

using namespace std;
void sort(int *arr, int len);

int main()
{
    int arr[10] = {100,26,7,400,398,352,874,20,48,20};
    int len = sizeof(arr) / sizeof(int);

    sort(arr, len);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
     
}

void sort(int arr[], int len) {
    
    for(int j = 1;j < len;++j) {
        int key = arr[j];
        int i = j - 1;

        while(i > -1 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }

        arr[i + 1] = key;
    }
}