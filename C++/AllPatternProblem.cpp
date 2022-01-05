#include<bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= n; j++)
        {
            cout << "*";
        }
        cout <<"\n";
    }
}

void pattern2(int n)
{
    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= i; j++)
        {
            cout << "*";
        }
        cout <<"\n";
    }
}

void pattern3(int n)
{
    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= n-i+1; j++)
        {
            cout << "*";
        }
        cout <<"\n";
    }
}

void pattern4(int n)
{
    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= i; j++)
        {
            cout << j;
            cout << " ";
        }
        cout <<"\n";
    }
}

void pattern5(int n)
{
    for(int row=1; row <= 2*n-1; row++)
    {
        int totolColInRow = row > n ? 2*n - row : row;
        for(int col=1; col <= totolColInRow; col++)
        {
            cout << "*";
        }
        cout <<"\n";
    }
}

void pattern6(int n)
{
    for(int row=1; row <= n; row++)
    {
        int totolSpaceInRow = n - row ;
        for(int col=1; col <= totolSpaceInRow; col++)
        {
            cout << " ";
        }
        for(int col=1; col <= row; col++)
        {
            cout << "*";
        }
        cout <<"\n";
    }
}

void pattern8(int n)
{
    for(int row=1; row <= n; row++)
    {
        int totolSpaceInRow = n-row ;
        for(int col=1; col <= totolSpaceInRow; col++)
        {
            cout << " ";
        }
        int totolColInRow = 2*row-1 ;
        for(int col=1; col <= totolColInRow; col++)
        {
            cout << "*";
        }
        cout <<"\n";
    }
}

int main()
{
    pattern8(5);
}

