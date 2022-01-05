#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int sum_digits = 0;
        while (n > 0)
        {
            int last_digit = n % 10;
            sum_digits = sum_digits + last_digit;
            n = n/10;
        }
        cout << sum_digits << endl;
        
    }
}