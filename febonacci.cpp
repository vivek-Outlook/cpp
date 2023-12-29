#include<bits/stdc++.h>
using namespace std;

int feb1(int n)
{
    if(n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    return feb1(n-1) + feb1(n-2);
}
long long feb2 (int n, long long arr[])
{
    if(n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    if(arr[n]!= 0)
    {
        return arr[n];
    }
    long long output = feb2(n-1,arr) + feb2(n-2,arr);
    arr[n] = output;
    return output;
}

long long feb3(int n)
{
    long long ans = 0;
    int i  = 0; 
    int j = 1;
    int count = 1;
    while( count < n)
    {
        ans = i + j;
        i = j;
        j = ans;
        count++;
    }
    return ans;
}
int main()
{
    int n = 0;
    cout << "Enter the no" <<endl;
    cin >> n;
    long long arr[n +1]{0,};
     cout << feb3(n) <<endl;
    cout << feb2(n,arr) <<endl;
    cout << feb1(n) <<endl;
   
    return 1;
}