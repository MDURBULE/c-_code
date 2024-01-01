#include <bits/stdc++.h>
using namespace std;

void bubble(int ar[], int n)
{

    bool swaped = false;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
                swaped = true ;
            }
        }
        if(swaped == false){
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}