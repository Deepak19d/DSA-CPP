#include<bits/stdc++.h>
using namespace std;
int checkPrime(int num)
{
    for (int i = 2; i <num; i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}

int countPrime(int n, int arr[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int flag=checkPrime(arr[i]);
        count+=flag;

    }
    return count;

}

int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int flag=countPrime(n, arr);
    cout<<flag;
}