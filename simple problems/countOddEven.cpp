#include<bits/stdc++.h>
using namespace std;
void countOddEven(int arr[], int n){
    int odd=0;
    int even=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"Even numbers ="<<even<<endl;
    cout<<"Odd numbers ="<<odd;
}
int main()
{
    int arr[]={2,3,4,5,113,7,8,10,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    countOddEven(arr,n);
}