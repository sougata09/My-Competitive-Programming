#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long int x = pow(10,9) + 7;
    long long int product = 1;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        product = (product*arr[i])%x;
    }
    cout << product;
}