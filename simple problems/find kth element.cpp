#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==k)
        {
        return i;
        }

    }
    return -1;
}
int main()
{
    int arr[]={2,3,4,5,6,7,8,12,};
    int k;
    cin>>k;
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int index=linearSearch(arr,n,k);
    cout<<index;

}