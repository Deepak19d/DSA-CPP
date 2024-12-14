#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)

{
    int flag,temp;
    for(int i=1; i<n; i++)
    {
        flag=0;
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}

int main()
{
    int n =5;
    int arr[]={3,4,1,6,5};
    BubbleSort(arr,n);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i];
    }
   
   
}