#include<iostream>

using namespace std;

int main()
{
    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        for(int j = 1;j < c;++j)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
}