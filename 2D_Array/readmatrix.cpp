#include<iostream>
using namespace std;
int main()
{
    int a[10][10], key;
    int n, m;
    cout<<"Enter ROWs and COLUMNs"<<endl;
    cin>>n>>m;
    int number=1;
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<n; c++)
        {
            a[r][c]=number++;
           // cin>>a[r][c];
        }
    }

     for(int r=0; r<n; r++)
    {
        for(int c=0; c<n; c++)
        {
            cout<<a[r][c];
        }
        cout<<endl;
    }

    cout<<" Enter kEy :" <<endl;
    cin>>key;


     for(int r=0; r<n; r++)
    {
        for(int c=0; c<n; c++)
        {
            if(key==a[r][c])
            {
              cout<<r " "<<c<<endl;
            }
        }

    return 0;
}





