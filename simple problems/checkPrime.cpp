#include<bits/stdc++.h>
using namespace std;
int checkPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0 && i!=1 && i!=n)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int flag = checkPrime(n);
    if(flag ==1)
    {
        cout<<"It is a Prime Number";
    }
    else
    {
        cout<<"It is not a Prime Number";
    }
}