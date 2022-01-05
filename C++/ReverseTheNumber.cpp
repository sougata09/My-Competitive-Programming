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
        int new_number = 0;
        while (n > 0)
        {
            int last_digit = n % 10;
            new_number =new_number*10 + last_digit;
            n = n/10;
        }
        cout << new_number << endl;
        
    }
}