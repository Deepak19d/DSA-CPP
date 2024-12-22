#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    int temp, flag;
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
    int n=5;
    int arr[]={4,6,7,3,2};
    cout<<"Array before sorted "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    BubbleSort(arr,n);
    cout<<"array after Sorted "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
}