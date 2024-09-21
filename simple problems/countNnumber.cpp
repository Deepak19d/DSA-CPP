#include<bits/stdc++.h>
using namespace std;
int sumN(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<sumN(n);
}