#include<iostream>
using namespace std;
int main()
{
    int num; int count =0;
    cout<<"number daal bhaii"<<endl;
    cin>>num;
    for(int k=2; k<=num; k++)
    {
        if(num%k==0)
        count++;
    }
    if(count==1)
    
        cout<<"prime";
        else 
        cout<<"not prime";
    return 0;
}