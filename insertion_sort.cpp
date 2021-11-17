#include<iostream>

using namespace std;

int main()
{
     int arr[10] = {1,2,6,4,78,40,67,100,56,30};

     //insertion sort
     for(int j = 1;j < 10;++j)
     {
        int key = arr[j];
        int i = j - 1;

        //shift the greater number to the right
        while (i > -1 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        
        arr[i + 1] = key;
     }

     for (int i = 0; i < 10; i++)
     {
         cout << arr[i] << " ";
     }
     
}