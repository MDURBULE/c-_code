#include <bits/stdc++.h>
using namespace std;

void seleciton(int ar[], int n)
{
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                min = j;
            }
        }
        swap(ar[min],ar[i]);
    }
}
int main()
{
    int n;
    cin >> n;

    cout << endl;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    seleciton(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}