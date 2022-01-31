#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0;i < n/2;++i)
    {
        for(int j = 0;j <= i;++j)
        {
            cout << "#";
        }
        cout << "\n";
    }

    for(int i = 0;i < (n - (n/2));++i)
    {
        for(int j = i;j < (n - (n/2));++j)
        {
            cout << "#";
        }
        cout<<"\n";
    }
}