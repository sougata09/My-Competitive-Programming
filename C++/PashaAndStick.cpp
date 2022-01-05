#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int count =0;
    for(int i=1; i<=n/2;i++)
    {
        int x = i;
        int y = n/2 - i;
        if(((2*x)+(2*y))==n && (x!=y))
        {
            count++;
        } 
    }
    cout << count/2;
   
    return 0;
}